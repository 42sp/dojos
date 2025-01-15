# Docker Compose Dojo

Bem-vindo(a) ao Dojo de **Docker Compose**!
Aqui, vamos criar um ambiente de desenvolvimento baseado em Docker (como se fosse um GitHub Codespace). O objetivo é construir um projeto com **backend**, **frontend** e **Nginx** (para gerenciar as comunicações).
**O projeto pode ser o mais simples possivel!
Qualquer Hello World, desde que eles se comuniquem.**

## Estrutura do Projeto

A estrutura básica já estará disponível para quem for realizar o dojo:

```
.
├── .devcontainer
│   ├── devcontainer.json
│   └── docker-compose.yml
├── docker
│   ├── service1
│   │   └── Dockerfile
│   ├── service2
│   │   ├── Dockerfile
│   │   └── config
│   │       └── data.cfg
│   └── dev
│       └── Dockerfile
│       └── config
│           └── startup.sh
├── product
│   ├── backend
│   │   └── file.ts
│   ├── frontend
│   │   └── file.x
│   ├── database
│   │    └── data.sql
│   ├── other.sh
│   └── something.txt
├── README.md
└── docker-compose.yml
```

- **raiz**: pasta principal, onde ficam o `docker-compose.yml` e as subpastas de toda aplicação.
- **.devcontainer**: pasta que contém as instruções para o funcionamento do plugin "Dev Container" do vscode.
   `as configurações ja estão feitas, é so usar!`
- **docker**: pasta que contém os arquivos para construção de cada container que será utilizado pela aplicação. Cada container deve estar separada em sua própria pasta contendo seus arquivos adicionais de configuração `(quando necessário)`.
```
   Um container especial chamaremos de "dev" que será o container de desenvolvimento.
```
- **app**: diretorio que contém toda aplicação que desenvolveremos `(backend, frontend, testes, scripts de database ou qualquer outro componente necessário).`

## Objetivos do Dojo

1. **Criar um ambiente Docker de desenvolvimento**, Imagem docker e `docker-compose` para o projeto.
   - O ambiente de desenvolvimento deve permitir que você faça alterações no código e veja as mudanças refletidas imediatamente tanto no container quanto no host, vamos mapear o diretorio necessario para isso acontecer.

2. **Terminar de configurar o `docker-compose`** para esse ambiente de desenvolvimento.
   - Aqui, você vai ajustar o `docker-compose.yml` para incluir portas, volumes, redes, entre outros detalhes, mas somente o que for necessario.
   - Lembre-se de revisar e ajustar sempre que for necessário instalar novas dependências no contêiner de desenvolvimento.

   2.1 **Desenvolver as aplicações** (backend, frontend, etc.) de dentro do contêiner de desenvolvimento.

3. **Adicionar novos serviços** (Nginx para roteamento, frontend, backend, etc.) seguindo um passo a passo:
   ```
   Obs.: O Nginx não pode fazer proxy para o container de dev, ele deve fazer proxy para os outros containers.
   ```
   1. Configurar o `Dockerfile` do serviço escolhido (dica: fazer o Nginx, frontend e backend).
   2. Configurar o serviço no `docker-compose` (e atualizar o serviço `dev`, se necessário).
   3. Testar para garantir que está tudo funcionando e que o serviço funciona no seu próprio contêiner. Porém, a **desenvoltura** (edição de arquivos, etc.) continua acontecendo no contêiner de desenvolvimento mas o serviço desenvolvido deve rodar tbm no contaienr feito para ele.

Repetiremos o processo até que **todos os serviços** estejam funcionando.

## Sobre portas
- **Somente o nginx deve receber requisiçoes externas**
- **Os outros serviços so podem se comunicar dentro rede docker**

## Passos Detalhados

1. **Ambiente de Desenvolvimento (`dev`)**
   - Verificar se o contêiner de desenvolvimento está funcionando, se as pastas estão devidamente mapeadas entre o host e o contêiner, e se está funcionando.
   - Responda às perguntas:
     - Os arquivos estão mapeados e sendo atualizados de dentro do Docker para fora dele?
     - Está tudo funcionando?
   - Só passe para o próximo passo se ambas as respostas forem **sim**.
   - Caso você saiba como acessar o container dev pelo devcontainer, faça isso e vá para o passo 2.
   - Caso não saiba:
     `Chame a pessoa que está organizando o dojo e peça ajuda.`

2. **Configuração e Testes**
   - Cada novo serviço (por exemplo, `service1`, `service2`, `service3`) terá seu próprio Dockerfile (**defina corretamente o nome do serviço**).
   - Ajuste o `docker-compose` de modo que cada serviço suba em seu próprio contêiner, mas que o desenvolvimento continue ocorrendo dentro do contêiner `dev`.
   - Teste o fluxo das requisições para ter certeza de que o contêiner correto recebe as chamadas.
   - Se a requisição chegar no contêiner de `dev` ao invés do contêiner específico do serviço, a configuração precisa ser corrigida.

3. **Validação**
   - Cada serviço precisa ser validado: verifique se está rodando, se é acessível na porta configurada e se está integrado com o restante da aplicação.
   - Somente quando todos os serviços estiverem funcionais e respondendo corretamente às requisições, esta etapa estará concluída.

## Resultado Esperado.

- Ao final do dojo, você deve ter:
  - **Um ambiente de desenvolvimento** rodando em contêiner Docker, no qual você desenvolver sua aplicação de modo geral.
  - **Serviços separados** (backend, frontend, Nginx) em contêineres independentes, gerenciados pelo `docker-compose`.
  - **Comunicação entre os serviços** através de chamadas HTTP, com o Nginx atuando como um proxy reverso.
   - **Persistência de dados** através de volumes Docker, garantindo que os dados não sejam perdidos quando os contêineres forem parados ou removidos. `(Não estamos falando de banco de dados, mas sim de arquivos)`

## Dicas Finais
   ```
   Imagens Docker:
      https://hub.docker.com/search?badges=official

   Documentação: RTFM! ❤
      WORKDIR, RUN, COPY, CMD, ENTRYPOINT
      https://docs.docker.com/reference/dockerfile/
   ```
- Use e abuse dos logs do Docker para entender o que está acontecendo.
- Não hesite em atualizar os `Dockerfile` e o `docker-compose.yml` conforme novas dependências forem necessárias.
- Lembre-se de que, para prosseguir em cada etapa, os serviços devem estar configurados corretamente e funcionando como esperado.

### Comandos docker compose
```bash
# comando para buildar e subir os containers
docker-compose up --build -d
# comando para parar os containers e apagar tudo
docker-compose down --rmi all -v --remove-orphans
# comando para os logs dos containers
docker-compose logs -f
# comando para executar um comando dentro do container
docker-compose exec
# comando para listar os containers
docker-compose ps
# comando para tornar todos os arquivos do projeto para o user atual (caso tenha problemas de permissão)
sudo chown -R $USER:$USER ./
```
Boa sorte e bom aprendizado!