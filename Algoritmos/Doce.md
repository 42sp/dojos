<h1 align="center">
 🍬🍭Doce 🧁🍪
</h1>

> *"Nunca aceite doces de estranhos" Mamãe*

## 😜 Quem tira nota mais alta ganha mais doce
Ok. Parece um discurso um tanto quanto meritocrático, mas deixando a problematização de lado, a nossa missão aqui é saber o número mínimo de doces que precisamos levar para as crianças dado que **quem tirou nota mais alta na prova tem que ganhar mais doces do que os colegas ao lado**. 

*obs: por motivos legais não mencionaremos neste desafio questões médicas como diabetes e cáries.*

## 🚀 O Desafio

Este desafio pode ser resolvido na linguagem de sua preferência. Qualquer linguagem tá valendo, até [BIRL](https://birl-language.github.io/)!

Em uma fila de crianças que receberão doces, cada criança trará o boletim, com a nota que tirou. Sua missão é calcular a quantidade mínima de doces que precisamos levar, seguindo os seguintes critérios:

1. A inveja tá liberada: Todo mundo fica de olho no quanto a pessoinha do lado ganhou, então cada criança tem que ter garantido o direito de que, se o amiguinho do lado tirou uma nota mais baixa, ele tem que receber menos doce. 

⚠️ **Considere somente a nota dos vizinhos neste critério.**

2. Ninguém fica sem doce: Cada criança deve ganhar pelo menos 1 doce. Esse número deve crescer de acordo com o critério anterior (ainda que digam por aí que inveja mata).

### ⌨️ Show me the code

A lista de crianças com suas respectivas notas (único parâmetro de entrada) deve ser um `array` de `inteiros`. Cada elemento do `array` simboliza uma criança e sua respectiva nota, por exemplo:

- ``[5, 7, 8, 3]``: Isso simboliza uma fila de 4 crionças 🐯, sendo que a primeira tirou 5, a segunda 7, a terceira 8 e quarta 3.

A saída deve ser um inteiro, por exemplo:

Se tomarmos como entrada o exemplo anterior ``[5, 7, 8, 3]`` a saída deve ser `7`, porque:

- a segunda crionça (que tirou 7) deve receber mais doces do que a primeira (que tirou 5)
- a terceira (que tirou 8) deve receber mais doces do que a segunda (que tirou 7)
- a quarta (que tirou 3) deve receber menos doces do que a terceira (que tirou 8), então 1 doce é suficiente para ela

Tendeu?

⭐ Bônus: O bônus do rolê não é algo para ser feito depois, mas sim antes, então decidam se vão fazer com bônus ou não desde já. O desafio do bônus é fazer tudo isso usando TDD. Se você não sabe o que é TDD, pergunta pro Chat GPT. Hihi.

## Dicas 😜
### Dica de ouro! ✨
- Não tente fazer todos os passos de uma vez. Use Baby Steps! 👶🏾🍼 
### Dica de prata!
- Não tente tratar corner cases antes de fazer o rolê funcionar. A criançada quer doce, não os deixe esperando.

## 📎 Referências
- Este desafio foi retirado do [LeetCode](https://leetcode.com/problems/candy/?envType=study-plan-v2&envId=top-interview-150). Dá uma bizoiada em outros por lá, é legal. 👍🏾