
🐋 E um pouquinho de docker, é claro

## Introdução

Metabase é uma ferramenta que te permite criar dashboards e visualizações de dados em geral, conectando direto com qualquer Banco de Dados que você tiver.

![Dashboard de exemplo](https://www.metabase.com/docs/latest/dashboards/images/interactive-dashboard.png)

No nosso Dojo, conectaremos o nosso Metabase com um Banco de Dados PostgreSQL. Mas vamos subir tudo do zero, usando Docker. Por isso, provavelmente metade do Dojo será aprendendo como fazer este Setup, e a outra metade fazendo o desafio no Metabase de fato. ;)

## Setup

O Setup, antes de começar a usar o Metabase de fato, vai consistir de 4 passos:

1. Subir um Banco de Dados PostgreSQL
2. Subir uma interface administrativa do PostgreSQL
3. Rodar os scripts de criação de tabelas e dados da base que vamos usar
4. Subir o Metabase

Para os passos 1, 2 e 4 vamos usar Docker, mas sem entrar em detalhes de como funciona. Para se aprofundar em Docker, neste mesmo repositório tem alguns Dojos que são mais específicos. ;)

Também não entraremos aqui em detalhes de PostgreSQL, mas se vocês quiserem se aprofundar, tem um outro Dojo específico sobre Banco de Dados neste mesmo repositório.

### Subindo um Banco de Dados PostgreSQL

Para subir o servidor de BD PostgreSQL, utilizamos como base [este artigo](https://renatogroffe.medium.com/postgresql-docker-executando-uma-inst%C3%A2ncia-e-o-pgadmin-4-a-partir-de-containers-ad783e85b1a4)

Tudo o que você precisa fazer é rodar esses dois comandos, que vão subir um container do docker prontinho:

`docker network create --driver bridge postgres-network`

`docker run --name bd-postgres --network=postgres-network -e "POSTGRES_PASSWORD=RTFM" -p 5432:5432 -d postgres`

Você consegue ver se tá tudo certo rodando o comando `docker ps`

Ele deve te trazer como output o container que está rodando:

```
CONTAINER ID   IMAGE            COMMAND                  CREATED          STATUS          PORTS                           NAMES
09bd05cf81ad   postgres         "docker-entrypoint.s…"   8 minutes ago    Up 8 minutes    0.0.0.0:5450->5432/tcp          bd-postgres
```
### Subindo o pgAdmin

O pgAdmin é a interface web pela qual você vai conseguir criar tabelas e dados no nosso Banco de Dados.

![Interface do pgAdmin](https://www.elephantsql.com/images/blog/elephantsql-pgadmin.png)

Para subir um container rodando o pgAdmin dentro da mesma rede do PostgreSQL que você subiu é só rodar o seguinte comando:

`docker run --name bd-pgadmin --network=postgres-network -p 5451:80 -e "PGADMIN_DEFAULT_EMAIL=dojozao@42sp.org.br" -e "PGADMIN_DEFAULT_PASSWORD=RTFM" -d dpage/pgadmin4`

Você consegue ver se tá tudo certo rodando o comando `docker ps`

Ele deve te trazer como output os 2 containeres que estão rodando:

```
CONTAINER ID   IMAGE            COMMAND                  CREATED          STATUS          PORTS                           NAMES
700216a4a899   dpage/pgadmin4   "/entrypoint.sh"         46 seconds ago   Up 44 seconds   443/tcp, 0.0.0.0:5451->80/tcp   bd-pgadmin
09bd05cf81ad   postgres         "docker-entrypoint.s…"   8 minutes ago    Up 8 minutes    0.0.0.0:5450->5432/tcp          bd-postgres
```

### Criando as tabelas e populando os dados

Para criar as tabelas e dados você vai ter que acessar a interface do pgAdmin em `http://localhost:5451/`

O login é `dojozao@42sp.org.br` e a senha `RTFM`

Antes de qualquer coisa você terá que conectar o pgAdmin com seu servidor PostgreSQL. Siga as instruções da sessão `Testes` [deste post](https://renatogroffe.medium.com/postgresql-docker-executando-uma-inst%C3%A2ncia-e-o-pgadmin-4-a-partir-de-containers-ad783e85b1a4)

Na parte de configurar a conexão, utilize como Host `bd-postgres`, como Porta `5432`, Database Name `42eventos`, User Name `postgres` e senha `RTFM`.

Nesta interface, você vai ter que criar um novo Banco de Dados chamado `42Eventos` e rodar nele o script `script_dojo_metabse.sql`que se encontra neste mesmo repositório.

### Subindo uma instância do Metabase

Essa talvez seja a parte mais fácil do Setup. Para subir uma instância do Metabase é só rodar o seguinte comando:

`docker run --name metabase --network=postgres-network -d -p 3000:3000 metabase/metabase`

Você consegue ver se deu certo usando o `Docker ps` e vendo se o container está rodando:

```
CONTAINER ID   IMAGE               COMMAND                  CREATED             STATUS             PORTS                           NAMES
fa0278c95354   metabase/metabase   "/app/run_metabase.sh"   5 seconds ago       Up 4 seconds       0.0.0.0:3000->3000/tcp          metabase
3de233556ceb   postgres            "docker-entrypoint.s…"   50 minutes ago      Up 50 minutes      0.0.0.0:5432->5432/tcp          bd-postgres
700216a4a899   dpage/pgadmin4      "/entrypoint.sh"         About an hour ago   Up About an hour   443/tcp, 0.0.0.0:5451->80/tcp   bd-pgadmin
```

Acessando o endereço `http://localhost:3000/` você provavelmente já verá a tela de login do Metabase. Talvez demore uns segundinhos até funcionar. ;)

Durante a configuração inicial, você já deve usar os dados do seu Banco de Dados PostgreSQL:

```
Nome amigável: 42Eventos
Host: bd-postgres
Porta: 5432
Database name: 42eventos
Username: postgres
Senha: RTFM
```
## O desafio

Agora que está tudo de pé, o desafio é o seguinte...

Crie um dashboard bonitão, agregando informações aos poucos de acordo com os dados que temos no BD de eventos realizados na 42. Queremos ver nesse dashboard:

- A saúde dos eventos com base nos feedbacks
- Os convidados mais populares (que foram mais vezes)
- Empresas mais populares (que foram mais vezes)
- Quais foram os melhores eventos
- A média de eventos por mês
- O quão próximo estamos da meta de eventos no ano (defina a meta você, hehe)