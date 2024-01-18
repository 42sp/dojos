
> 📋 Resumo do desafio: Em grupos de pelo menos 3 pessoas, escolha o minishell de alguma pessoa e faça-o rodar utilizando o comando `docker run minishell`

## Sdds minishell

Não queremos acionar gatilhos, mas sabemos todos que o mini~~s~~hell é  um projeto "desafiador" na 42. Passar pelo `minishell` é um marco. Um marco bom? Um marco ruim? Aí vai da experiência de cada um.

Aqui vamos aproveitar um minishell já pronto para aprender um pouquinho sobre docker. Bora?

## O desafio

O desafio é bem simples: disponibilizar um minishell para que qualquer pessoa no mundo consiga utilizá-lo simplesmente usando o comando `docker run minishell`

Pode escolher o minshell de quem você quiser! 🙌🏾

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

### Bônus do Bônus

Geralmente, quando você está subindo vários conteineres a partir de várias imagens para que funcionem em conjunto (por exemplo, um conteiner subindo uma imagem do front, outro subindo a do back e outro a do BD ) fica muito trabalhoso ficar subindo cada um usando uma linha de comando por vez.

Para isso, existe uma solução muito utilizada por aí, que é o docker-compose.

Segundo o chat GPT (usando um prompt muito doido):

> O Docker Compose é como o diretor de uma orquestra para aplicativos, ajudando a organizar e gerenciar diferentes partes do programa para que possam trabalhar juntas sem confusão. Em vez de apenas lidar com músicos (contêineres) individualmente, ele também cuida dos instrumentos (imagens do Docker) necessários para cada um. Assim, seguindo uma partitura (arquivo de composição do Docker), o Docker Compose cria um ambiente harmonioso onde todos os componentes se unem para executar a melodia desejada do seu aplicativo.

Aqui não vamos subir múltiplos conteineres, mas a ideia do bônus do bônus é você conseguir pelo menos usar o `docker-compose`.

> O seu desafio aqui é conseguir subir este minishel usando simplesmente o comando `docker-compose up` ao invés do `docker run`