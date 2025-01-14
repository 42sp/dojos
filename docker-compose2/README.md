# Docker Compose Dojo

Bem-vindo(a) ao Dojo de **Docker Compose**!
Aqui, vamos criar um ambiente de desenvolvimento baseado em Docker (como se fosse um GitHub Codespace). O objetivo é construir um projeto com **Node.js** (backend), **React** (frontend) e **Nginx** (para gerenciar as comunicações).
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
│   ├── service3
│   │   └── Dockerfile
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
- **docker**: pasta que contém os arquivos para construção de cada container que será utilizado pela aplicação. Cada container deve estar separada em sua própria pasta contendo seus arquivos adicionais de configuração (quando necessário). Um container especial chamaremos de "dev" que será o container de desenvolvimento.
- **product**: pasta que contém toda aplicação que desenvolveremos (backend, frontend, testes, scripts de database ou qualquer outro componente necessário).

## Objetivos do Dojo

1. **Criar um ambiente Docker de desenvolvimento**, permitindo que todos os participantes trabalhem dentro do contêiner, com as dependências necessárias para desenvolver o projeto.

2. **Terminar de configurar o `docker-compose`** para esse ambiente de desenvolvimento.
   - Aqui, você vai ajustar o `docker-compose.yml` para incluir portas, volumes, redes, entre outros detalhes.
   - Lembre-se de revisar e ajustar sempre que for necessário instalar novas dependências no contêiner de desenvolvimento, para que todos tenham o mesmo ambiente configurado.

3. **Adicionar novos serviços** (Nginx para roteamento, React para frontend, Node.js para backend, etc.) seguindo um passo a passo:
   1. Configurar o `Dockerfile` do serviço escolhido (dica: fazer o Nginx, frontend e backend).
   2. Configurar o serviço no `docker-compose` (e atualizar o serviço `dev`, se necessário).
   3. Testar para garantir que está tudo funcionando e que o serviço funciona no seu próprio contêiner. Porém, a **desenvoltura** (edição de arquivos, hot reload, etc.) continua acontecendo no contêiner de desenvolvimento.

Repetiremos o processo até que **todos os serviços** estejam funcionando.

## Passos Detalhados

1. **Ambiente de Desenvolvimento (`dev`)**
   - Verificar se o contêiner de desenvolvimento está funcionando, se as pastas estão devidamente mapeadas entre o host e o contêiner, e se o hot reload está funcionando.
   - Responda às perguntas:
     - Os arquivos estão mapeados e sendo atualizados de dentro do Docker para fora dele?
     - Está tudo funcionando?
   - Só passe para o próximo passo se ambas as respostas forem **sim**.

2. **Configuração e Testes**
   - Cada novo serviço (por exemplo, `service1`, `service2`, `service3`) terá seu próprio Dockerfile.
   - Ajuste o `docker-compose` de modo que cada serviço suba em seu próprio contêiner, mas que o desenvolvimento continue ocorrendo dentro do contêiner `dev`.
   - Teste o fluxo das requisições para ter certeza de que o contêiner correto recebe as chamadas.
   - Se a requisição chegar no contêiner de `dev` ao invés do contêiner específico do serviço, a configuração precisa ser corrigida.

3. **Validação**
   - Cada serviço precisa ser validado: verifique se está rodando, se é acessível na porta configurada e se está integrado com o restante da aplicação.
   - Somente quando todos os serviços estiverem funcionais e respondendo corretamente às requisições, esta etapa estará concluída.

## Resultado Esperado da parte mandatoria.

- Ao final do dojo, você deve ter:
  - **Um ambiente de desenvolvimento** rodando em contêiner Docker, no qual você consegue programar (Node.js, React, etc.) e ter hot reload.
  - **Serviços separados** (backend, frontend, Nginx) em contêineres independentes, gerenciados pelo `docker-compose`.
  - Uma noção clara de como fazer **build** e **deploy** de maneira mais controlada.

## FIM, Só Que Não MuuuuuHAHAHAHAHAHAHA!!!
4. **Parte Bônus**
   - **Remover o hot reload** e adicionar uma forma de fazer **deploy** mais segura das atualizações.
   - A dica aqui é usar o **Git** ou outro sistema de versionamento/integração para controlar como as alterações entram em produção.

## Dicas Finais

- Use e abuse dos logs do Docker para entender o que está acontecendo.
- Não hesite em atualizar os `Dockerfile` e o `docker-compose.yml` conforme novas dependências forem necessárias.
- Lembre-se de que, para prosseguir em cada etapa, os serviços devem estar configurados corretamente e funcionando como esperado.

Boa sorte e bom aprendizado!