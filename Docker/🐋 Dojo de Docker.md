
> 📋 Resumo do desafio: Em grupos de pelo menos 3 pessoas, baixe o repositório indicado abaixo e faça o binário ser executado a partir de um container Docker.

*https://github.com/tdd42sp/unstuck_minishell*

## Dicas 😜

### Dicas de ouro! ✨

- O começo da mágica está em criar um arquivo `Dockerfile`
- Para gerar uma imagem docker é só usar o comando `docker build .` na pasta em que está o `Dockerfile` 
- Utilize a imagem `ubuntu:latest`
- Não compile o binário dentro do conteiner, faça só a cópia dele já compilado
- Use o próprio `Dockerfile` para instalar o que for necessário no container
- O `ENTRYPOINT` deve ser o próprio binário

### Outras dicas 💡

- O comando `docker run <imagem>` sobe um container a partir de uma imagem
- O comando `docker image ls` lista as imagens compiladas no computador
- O comando `docker ps` lista os containers rodando no computador
- Para investigar o que está acontecendo dentro de um container, talvez esse link seja útil: 
	- https://devopscube.com/keep-docker-container-running/

### Bônus 🎉

> 😜 Se estiver conseguindo executar o binário a partir de um container Docker, faça o `push` dessa imagem para o `Dockerhub` e suba esse container a partir do `Dockerhub` em algum outro computador 

