  
> 📋 Resumo do desafio: Em grupos de pelo menos 3 pessoas, escolha um repositório de um projeto da 42 de um dos membros do time e configure o Github Actions para rodar automaticamente a cada push na `main` a sequência de passos `Norminette`, `Build`, `Tests` e `Valgrind`

## O desafio

O desafio aqui é a configuração de um Pipeline usando Github Actions. Esse Pipeline pode ser construído em cima de qualquer projeto da 42 de qualquer pessoa que faça parte do grupo do Dojo. Projetos mais complexos são mais "divertidos" para o Dojo.

Se uma etapa do Pipeline não passar, a seguinte não deve ser executada, de acordo com a seguinte ordem de etapas:

`Norminette (linter)` > `Compilação` > `Execução de testes` > `Verificação de vazamento de memória`

_Obs: Se o projeto escolhido não tem testes, ta aí um bom Bônus maneirinho para esse Dojo: Escreva alguns testes pra ele e coloque pra rodar._

## Dicas 😜

### Dica de ouro! ✨

O GitHub actions entende o que deve fazer com base nos arquivos `.yml` da pasta `.github` que deve estar na raíz do projeto. Use os repósitórios de exemplo ao final dessas dicas para tentar começar a fazer seu `.yml`.

### Outras dicas

- Não tente fazer todos os passos de uma vez. Use Baby Steps! 👶🏾🍼
- Vocês provavelmente farão muuuuuuitos pushes até terem sucesso 😅
- Escolham um projeto que não seja muito difícil de compilar, ver leak e etc... 😉
- Se vocês não tiverem nenhum projeto com testes, pulem esta etapa. E comecem a fazer testes! 🤬

## Repositórios de exemplo:

- https://github.com/LuigiEnzoFerrari/philosophers
- https://github.com/ThreeDP/ft_printf
- https://github.com/tiolula/tdd_libft
- https://github.com/AdrianWR/philosophers

## Um bônus de leve

Se você conseguiu configurar o pipeline com testes e tudo, o Bônus de verdade é colocar etiquetas no `README.md` do projeto que mostrem o estado do Pipeline, [como no título desse readme aqui](https://github.com/tiolula/tdd_libft#readme)
