
# The Baby Steps Game 🍼

> 📋 Resumo do desafio: Usando TDD, vocês resolverão um problema com código. A cada teste que falhe por conta da função não estar preparada ainda para lidar com aquele cenário, o time ganha 1 ponto. Cada vez que os testes estiverem passando e o time lembrar de fazer melhorias antes de escrever o próximo teste, o time ganha meio ponto.

## O desafio 🎯

O problema a ser resolvido no desafio é simples: faça uma função que receba um texto e que retorne num array ordenado as 3 palavras mais utilizadas no texto.

Qualquer carácter que não seja número, letra ou hífen é considerado como separador de palavras. Só devem ser consideradas palavras com três letras ou mais.

### Onde realmente mora o desafio: gamificando o rolê  🎰

Para resolver o desafio o grupo deverá utilizar TDD, de uma forma bem estrita:

1. 🔴 **Buscando o vermelho**: Primeiro escreve-se um teste para o qual o código de negócio ainda não está preparado. O teste deve ser **sempre** de um cenário de negócio válido. Do contrário ele será considerado fraude. Nesta etapa é proibido mexer no código de negócio.
2. 🟢 **Buscando o verde**: Estando no vermelho, busca-se resolver da forma mais simples possível o problema apontado pelo teste. Nesta etapa só se pode tocar no código de negócio. Caso perceba-se que o teste está inconsistente ou é uma fraude, dê rollback nas modificações feitas no código de negócio até o início deste passo e volte ao passo 1.
3. 🟢 **Melhorando o código:** Estando no verde, busca-se melhorar o código, tanto de negócios quanto de teste. Nesta etapa não deve-se escrever novos testes e nem mesmo novas features no código de negócio.
4. Tendo melhorado o código, volta-se ao passo 1.

### Pontuação  🧮

Cada time será responsável por contabilizar seus pontos de acordo com as seguintes regras:

- Cada vez que chegar ao fim do passo 1 (encontrar o 🔴) o time ganha 1 ponto.
- Cada vez que não pular o passo 3, o time ganha meio ponto 
- Caso se perca no fluxo, o time não deve contabilizar pontos até conseguir retornar à sequência de etapas proposta (🔴 > 🟢 > 🟢)

QUE COMEVEM OS JOGOS! 🙌🏾

# Score Board

Aqui você encontra as pontuações históricas deste jogo em desafios oficiais da 42 São Paulo.

`Fake Natties -> 1 ponto`
