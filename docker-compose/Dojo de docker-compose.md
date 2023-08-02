
> 📋 Resumo do desafio: subir usando `docker-compose` um conteiner com o `minishell` e fazer com sucesso um `ping` em uma página de um conteiner que tenha o nginx rodando

## Mddceu, quanta coisa!

Se o resumo te abalou, calma... respira! Como `docker-compose` pressupõe antes ter usado `docker`, esse Dojo ficou um pouquiiiinho mais complicado. Se você não conseguir rodar todas as partes, tá suave. Com certeza você vai aprender bastante sobre `docker` mesmo assim. 👊🏾

Maaaaaas, o começo do desafio vai ser justamente rodar a primeira parte de outros 2 dojos que usam `docker`. Quer ver? Se liga...

## O desafio

O desafio está composto de 3 partes.

### 🐋 Primeira parte:  dockerizando o `minishell

Para dockerizar o `minishell`, na real, você terá que fazer a o desafio do nosso belíssimo [Dojo de Docker](https://github.com/42sp/dojos/blob/main/Docker/%F0%9F%90%8B%20Dojo%20de%20Docker.md).

*obs: nem se preocupa com o bônus, ok? teoricamente é pra ser um desafio até que rápido, hehe.*

*obs²: Como essa não é a parte principal do Dojo, se estiver demorando muito pra fazer você pode só usar uma imagem pronta de algum `minishell`, tipo [essa](docker pull edudocerrado/dockershell) (thx, edu!).*

### 🌐 Segunda parte: dockerizando o `nginx`

Para dockerizar o `nginx`, ou até mesmo para saber o que é nginx, você vai rodar a **primeira parte** (E SOMENTE A PRIMEIRA PARTE) do nosso belíssimo [Dojo de Nginx e Webserv](https://github.com/42sp/dojos/tree/main/Nginx%20-%20Webserv#dojo-de-nginx-e-webserv).

*obs: se você já tiver isso rodando em algum canto, pode usar o que já tá rodando mesmo (mas vê se tá funfando certin, hein) e pular para a terceira parte.* 😉

### 🐋🐋 Terceira parte: agora sim o `docker-compose`

Nesta terceira parte vem o desafio de verdade! Seguinte...

Usando `docker-compose` você terá que subir o conteiner do `minishell` e o conteiner do `nginx` dos passos anteriores desse desafio. 

Tudo deve subir com um simples `docker-compose up`

De dentro do `minishell` você terá que fazer um `curl` para a página que está hospedada no conteiner do `nginx`.

Bora? 😜