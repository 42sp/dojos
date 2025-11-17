<h1 align="center">
♥️ ♣️ 🃏 Carteado 🃏 ♠️ ♦️
</h1>

> *"Não vai coringar, hein?"*

## Não adianta fazer mistério, você vai ter que mostrar sua mão
Não é poker nem 21, não estamos jogando a dinheiro... a ideia é ir revelando os segredos das cartas...

*Não, também não vamos levar para o lado exotérico, só queremos saber quais são as cartas mesmo.*

## 🚀 O Desafio

Este desafio pode ser resolvido na linguagem de sua preferência, mas seria mais legal em C, não é mesmo?

Você tem um array de inteiros chamado `baralho`. No seu baralho cada carta tem um inteiro único. O inteiro na `iª` carta é `baralho[i]`. 
Você pode ordenar o baralho em qualquer ordem que quiser. No início, as cartas estão viradas para baixo (sem ser reveladas) em um monte único.

Você vai seguir os seguintes passos repetidamente até todas as cartas serem reveladas

1. Pegue a carta do topo do baralho, revele-a, e tire-a do baralho.
2. Se ainda houver cartas no baralho inicial, coloque a próxima carta do topo no fundo do baralho.
3. Se ainda houver cartas não reveladas, volte ao passo 1. Caso contrário, pare.

Retorne **uma ordenação do baralho que revele as cartas em ordem crescente.**

Observe que a primeira entrada na resposta é considerada o topo do baralho.

### ⌨️ Show me the code

*Exemplo 1*

**Entrada:** `baralho = [17,13,11,2,3,5,7]`

**Saída:** `[2,13,3,11,5,17,7]`

**Mas como?**

Recebemos o baralho na ordem `[17, 13, 11, 2, 3, 5, 7]` (essa ordem não importa) e o reordenamos.

Após a reordenação, o baralho começa como `[2, 13, 3, 11, 5, 17, 7]`, onde 2 é o topo do baralho.

Revelamos o 2 e movemos o 13 para o fundo. O baralho agora é `[3, 11, 5, 17, 7, 13]`.

Revelamos o 3 e movemos o 11 para o fundo. O baralho agora é `[5, 17, 7, 13, 11]`.

Revelamos o 5 e movemos o 17 para o fundo. O baralho agora é `[7, 13, 11, 17]`.

Revelamos o 7 e movemos o 13 para o fundo. O baralho agora é `[11, 17, 13]`.

Revelamos o 11 e movemos o 17 para o fundo. O baralho agora é `[13, 17]`.

Revelamos 13 e movemos 17 para o fundo. O baralho agora é `[17]`.

Revelamos 17.

Como todas as cartas reveladas estão em ordem crescente, a resposta está correta.

Bora?

⭐ Bônus: O bônus do rolê não é algo para ser feito depois, mas sim antes, então decidam se vão fazer com bônus ou não desde já. O desafio do bônus é fazer tudo isso usando TDD. Se você não sabe o que é TDD, pergunta pro Chat GPT. Hihi.

## Dicas 😜
### Dica de ouro! ✨
- Não tente fazer todos os passos de uma vez. Use Baby Steps! 👶🏾🍼 

## 📎 Referências
- Este desafio foi retirado do [LeetCode](https://leetcode.com/problems/reveal-cards-in-increasing-order/description/). Dá uma olhada em outros por lá, é legal. 👍🏾