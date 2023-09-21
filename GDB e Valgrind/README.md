# DOJO - GDB / VALGRIND

## O que faremos?
Esse dojo funcionará em duas partes: <br>
1. Já ouviu falar de Capture the Flag? Temos 5 executáveis compactados em arquivos .zip protegidos com senha. Todos são programas diferentes que quando executados esperam por uma flag. Se a flag estiver errado o programa imprimirá `Fail`, se estiver correta imprimirá `Boua!`. Seu objetivo é encontrar no código a flag escondida usando gdb. Essa flag será a senha para o próximo desafio!

	A senha para o primeiro desafio é `gdb`.

2. Alguns executáveis estão vazando memória! Usem o Valgrind para achar e consertar todos os leaks dos programas.

## Bônus
Temos um problema com o Ctrl-D. Consegue consertar?

## Comandos úteis:
- Abrir um arquivo zipado com senha:
	<br>```unzip -P "<senha>" <nome do arquivo>```

- GDB:
	<br>```gdb --tui ./<arquivo>```

- Valgrind:
	<br>```valgrind --leak-check=full --show-leak-kinds=all ./<arquivo>```

- Compilação com símbolos de debug (útil para o Valgrind): <br>
	`clang -g3 <arquivo>.c`

- Compilar um desafio: <br>
	`make -C libft` <br>
  	`clang -g3 <desafio>.c src/rand<numero do desafio>.c libft/libft.a`



# Bonus Content 

Nesse bonus content eu vou mostrar como a gente pode usar o [GDB](https://www.sourceware.org/gdb/) e o [Valgrind](https://valgrind.org/) juntos, usando o [vgdb](https://valgrind.org/docs/manual/manual-core-adv.html#manual-core-adv.vgdb) um programa que serve como intermediário entre o Valgrind e o GDB, com o objetivo de encontrar erros no código com mais facilidade e acurácia.

Pra exemplificar, eu trouxe um código em C que possui um erro simples de condicional jump por um ponteiro não inicializado:

```C
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    int *ptr;
    
    ptr = malloc(sizeof(int));

    // Descomentar a próxima linha resolve o erro de condicional jump
    // *ptr = 42;

    if (*ptr > 5)  // <= condicional jump
        printf("Valor maior que 5\n");
    else
        printf("Valor menor ou igual a 5\n");
    free(ptr);
    return (0);
}
```

Vamos compilar o nosso programa usando o gcc e a flag -g, que é necessária para ativar as informações de depuração:

` gcc -g condicional_jump.c -o cj`

Ao rodar o valgrind ``valgrind ./cj`` , o seguinte erro aparece:

```
coder@meritissimo1-workspace-1337:~$ valgrind ./cj 
 ==487== Memcheck, a memory error detector
==487== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==487== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==487== Command: ./cj
==487==
==487== Conditional jump or move depends on uninitialised value(s)  <- nosso erro
==487==    at 0x401174: main (in /home/coder/cj)
==487==
Valor menor ou igual a 5
==487==
==487== HEAP SUMMARY:
==487==     in use at exit: 0 bytes in 0 blocks
==487==   total heap usage: 2 allocs, 2 frees, 1,028 bytes allocated
==487==
==487== All heap blocks were freed -- no leaks are possible
==487==
==487== Use --track-origins=yes to see where uninitialised values come from
==487== For lists of detected and suppressed errors, rerun with: -s
==487== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0) 
```
Agora vamos ver como isso fica usando o GDB e o Valgrind juntos.

Primeiro vamos precisar abrir dois terminais, um deles estará o GDB e no outro o Valgrind. Isso é preciso por que ambos serão processos distintos, mas que se comunicaram através de [UNIX SIGNALS](https://www.man7.org/linux/man-pages/man7/signal.7.html) 

Agora que temos os dois terminais, em um deles a gente irá executar o Valgrind com a flag `--vgdb-error=0`. Ao executar com --vgdb-error=*n*, o Valgrind espera que ocorram *n* erros antes de pausar e aguardar uma conexão do GDB. Como estamos passando *n* sendo 0, a opção --vgdb-error=0 faz com que o valgrind pause antes de executar qualquer instrução.

``` 
coder@meritissimo1-workspace-1337:~$ valgrind --vgdb-error=0 ./cj
==546== Memcheck, a memory error detector
==546== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==546== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==546== Command: ./cj
==546==
==546== (action at startup) vgdb me ...
==546==
==546== TO DEBUG THIS PROCESS USING GDB: start GDB like this
==546==   /path/to/gdb ./cj
==546== and then give GDB the following command
==546==   target remote | /usr/lib/x86_64-linux-gnu/valgrind/../../bin/vgdb --pid=546
==546== --pid is optional if only one valgrind process is running
```
Note que o próprio Valgrind já nos dá uma instrução do que fazer agora, basta irmos para o outro terminal e executar o GDB como ele pede, adicionando o `--tui` pra tudo ficar mais boninto :D.

no outro terminal rode:

`gdb --tui cj`

Essa mensagem vai aparecer `--Type <RET> for more, q to quit, c to continue without paging--`, basta digitar ***c*** e dar enter.

E agora sim, já dentro do GDB, execute o seguinte comando:

``target remote | vgdb --pid=546 `` 

Perceba que o pid do processo do Valgrind altera sempre que executamos ele, e esse número sempre estará no início de cada linha de informação do Valgrind.

Assim que comando acima for executado, basta passar a instrução `continue` ou `c`para o GDB que ele irá executar o programa todo de um vez. Nessa etapa, o GDB ficará "escutando" tudo o que Valgrind disser pra ele. Como nós conectamos ambos via PID, assim que o processo Valgrind encontrar um erro, ele mandará um sinal SIGTRAP que será capturado pelo GDB que irá pausar sua execução exatamente na linha onde o problema está.

[imagem do gdb]

Caso queira, é possível rodar o GDB linha a linha e ir acompanhando no outro terminal quando o Valgrind irá reclamar algum erro. Pra fazer isso basta setar um breakpoint na main `b main` e usar o `continue`, dessa forma podemos percorrer pelo código step by step.
