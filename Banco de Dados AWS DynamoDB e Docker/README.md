# Dojo de Banco de dados AWS DynamoDB e Docker

> 📋 Resumo do desafio: subir um `docker container` com `localstack` (uma ferramenta que emula a AWS e suas ferramentas localmente), interagir com o Banco de Dados Não Relacional DynamoDB criando uma tabela e adicionando vários elementos à ela (uma tabela de projetos da 42, com seu nome, dicas e ciclos por exemplo), e depois retornar dicas aleatórias dos projetos.

Este repositório contém o docker-compose necessário para subir o container (dentro da pasta config) e esse `README.md` para mais explicações.

## O desafio

Em resumo, o desafio passa por quatro etapas:

1. Subir uma ferramenta que emule a AWS, no caso localstack, usando Docker (uma vez que a gente não quer ter que pagar nada pra AWS só para fazer um dojo).
2. Criar um banco de dados DynamoDB via linha de comando dentro desse container.
3. Popular essa tabelas com informações dos Projetos da 42, por exemplo: Dicas, Ciclos, Fase e o que mais sentir vontade de adicionar.
4. Entender como um banco de Dados não relacional funciona para conseguir buscar as informações da tabela que havia criado anteriormente (Esse passo 4 provavelmente vai te levar a fazer o passo 3 algumas repetidas vezes).

[BÔNUS] Docker em si merece um dojo à parte, mas se quer aumentar o nível do desafio, descubra como criar o container docker com as configurações necessárias para rodar a localstack - basicamente fazer o projeto do Dojo sem qualquer empurrãozinho inicial.

## Dicas

- Se não ficou claro, para essa primeira etapa, a localstack é um emulador de serviços da AWS que permite testarmos serviços localmente sem a necessidade de uma conta.
Não é possível interagir com DynamoDB sem a AWS, visto que é um produto interno totalmente gerenciado por ela. Para rodar esse serviço, confira a seção Ajuda Para Começar ao fim desse README.md

## Sobre Bancos de Dados NoSQL

Bancos de Dados NoSQL funcionam diferente do que pode se esperar de um banco de Dados - que tem várias tabelas que se relacionam e que tornam possível fazer esse tipo de busca (em SQL): 
    
```
    SELECT <attribute> FROM <table_name> WHERE <condition>
```

ou, sendo um pouco mais claro e trazendo nosso para o nosso projeto:

```
    SELECT name FROM projects42 WHERE phase > 2
```

(buscando o nome de projetos que estejam à frente da fase 2).

Onde tudo no fim das contas lembra até uma grande tabela de excel.

Nesses bancos de dados não relacionais temos uma grande tabela e apenas 2 chaves de busca. sendo elas:

- Primary key, chave primária e ***obrigatória*** na busca.
- Sort Key, chave secundária e opcional para filtrar melhor a busca. 

Juntas elas formam a Partition Key, que é a única forma de buscar pela tabela.

## Ajuda para começar:

- Rodar o container Docker com LocalStack: `docker-compose up`;

- Para descobrir o id do container, rode `docker ps`

O primeiro número da resposta é o ID desse container, agora execute esse comando com o ID que descobriu

docker exec -it {CONTAINER_ID} /bin/bash

Agora você esta dentro do container em que vamos rodar tudo

- Criar suas credenciais AWS (mesmo localmente elas precisam existir).
	Rode o comando: `aws configure` e dê nomes aos campos:

	EXEMPLO:
	```
		AWS Access Key ID: test 
		AWS Secret Access Key: test
		Default region name: us-east-1
		Default output format: json
	```

- Criar a tabela com comandos do AWS CLI. Como estamos usando o localstack, usaremos o `awslocal` na linha de comando, ele ja nos direciona para o endpoint do localstack invés da aws;

	Exemplo caso nossa tabela se chamar Projetos42
	```
	awslocal dynamodb create-table \
	--table-name Projetos42 \
	--attribute-definitions \
	AttributeName=Id,AttributeType=N \
	--key-schema \
	AttributeName=Id,KeyType=HASH \
	--provisioned-throughput \
	ReadCapacityUnits=5,WriteCapacityUnits=5
	```

- Checar se a tabela foi criada com o comando: `awslocal dynamodb list-tables` (sua tabela deve aparecer nessa etapa)

- Adicionar um item com o comando:

	```
	awslocal dynamodb put-item \
	--table-name Projetos42  \
	--item \
	'{"Id": {"N": "1"}, "Nome": {"S": "Minishell"}, "Ciclos": {"S": "3"}, "Dica": {"S": "Cuidado com o Waitpid! Sempre teste <cat | cat | ls> e compare com o Bash original :D"}}'
	```

- Checar estado da tabela: com o comando `scan`, conseguimos ver toda a tabela: `awslocal dynamodb scan --table-name Projetos42`

## Agora é com vocês!

Temos uma tabela em mãos! Usando Boto3 temos que nos conectar com a tabela e fazer com que ela nos
devolva uma dica aleatória guardada nela.

### Desafios adcionais:
- Uma consulta que devolva __todas as dicas__ de projetos de uma __fase__;
- Uma função de cadastro de dica, sem ter que registrar pela linha de comando;

#### Para ajudar vocês no desafio: 
<https://boto3.amazonaws.com/v1/documentation/api/latest/reference/services/dynamodb.html>

## Contato

Esse dojo feito com muito suor e carinho por Augusto Becker (acesar-l) e Rafaela Bustamante (rabustam).

Podem nos encontrar por aqui e vez ou outra pelo campus:

Github:

https://github.com/augustobecker

https://github.com/rafaelabdm

LinkedIn:

https://www.linkedin.com/in/augusto-becker/

https://www.linkedin.com/in/rafaelabdm/