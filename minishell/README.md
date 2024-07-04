<p align="center">
	<b>
🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥<br>D O J O  DE  M I N I S H E L L<br>🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
</b><br>
</p>

## Uma Breve Introdução

Todo mundo sabe que o minishell é zica. Popularmente conhecido como 🔥minihell🔥, o projeto é grande e frequentemente ansiedade. A intenção desse Dojo é levar para um clima de diversão e descontração uma pitadinha do minishell pra quem já conhece dos pormenores conseguir trocar com quem ainda não finalizou o projeto e, juntos, aprenderem através do desafio proposto.

## 🚀 O Desafio

O desafio é composto por 2 partes:

### 1. Fazer o Minishell Tester funcionar

Foi utilizado como base para a construção desse Dojo [o minishell](https://github.com/LucasKuhn/minishell) e [o tester](https://github.com/LucasKuhn/minishell_tester) desenvolvido pelo lalex-ku. Ambos estão em uma versão simplificada, que serve como ponto de partida para o Dojo.

Para compilar o minishell deste repo, é só rodar o comando abaixo:

```bash
cc main.c -o minishell -lreadline
```

E para rodar o tester:

```bash
cd tester
bash dojo_tester.sh ./test_files/dojo_tests
```

Já existe um teste e uma implementação para o comando `pwd`, mas muito provavelmente o teste não está passando.

👉🏾 **Seu primeiro desafio é fazer o teste do `pwd` passar. Para isso você pode fazer ajustes tanto na `main.c` quanto no `tester/dojo_tester.sh`, ou qualquer outro arquivo necessário.**

Depois que o teste do `pwd` estiver passando, avance para a segunda parte do desafio.

### 2. echo

Assim que o tester estiver OK e o comando `pwd` estiver sendo executado com sucesso, o desafio é você fazer o minishell passar em cada um dos 5 cenários propostos abaixo:

1. `echo 42`
2. `echo Hello World`
3. `echo "Hello World"`
4. `echo hello'world'`
5. `echo hello""world`

Para isso você terá que adicionar estes cenários no arquivo `dojo_tests`.

## Dicas 😜

- Faça uma coisa por vez. Não tente resolver todos os problemas de uma vez só. Baby Steps é o que há!
- Você não precisa resolver tooooodos os problemas do mundo. Concentre-se no que o desafio pede.
- Feito hoje melhor do que perfeito um dia
- Você pode usar o [o minishell](https://github.com/LucasKuhn/minishell) e [o tester](https://github.com/LucasKuhn/minishell_tester) originais do lalex-ku para entender possíveis caminhos para os desafios, só não vale aldrabar!

## Bônus ⭐

Se você completar o desafio, pode partir para o bônus! O bônus é você implementar alguma outra função diferente da echo à sua escolha, incluindo quantos testes forem necessários no tester!

Inclusive esse é um bônus quase infinito, dado que você só acaba ele quando tiver um bash completo, né? hihi.

## Agradecimentos

À Clari, por ter proposto o Dojo. <3
Ao [Lucas Kuhnn](https://github.com/LucasKuhn) por tê-lo construído junto com o [Lula](https://github.com/tiolula). \o/
A toda a comunidade da 42SP! 