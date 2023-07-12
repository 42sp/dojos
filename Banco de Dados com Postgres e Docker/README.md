# Dojo de Banco de dados com Postgres e Docker

Este é um repositório praticamente vazio. Só tem esse `README.md`. Mas pra um Dojozinho de 1 hora e meia, ele basta. Se liga:

## O desafio

Em resumo, o desafio passa por três etapas:

1. [Subir um servidor de Banco de Dados e alguma ferramenta de gestão de Banco de Dados usando Docker](https://renatogroffe.medium.com/postgresql-docker-executando-uma-inst%C3%A2ncia-e-o-pgadmin-4-a-partir-de-containers-ad783e85b1a4)
2. Criar neste banco de dados as tabelas: Projeto e Cadete (a definição de quais campos cada tabela deve ter faz parte do Dojo 😜)
3. Popular estas tabelas com informações de Projetos (pelo menos 5) e Cadetes (pelo menos 20), e construir:
	1. Uma query que selecione todos os cadetes que estejam no libft (de acordo com os dados que vocês inseriram)
	2. Uma query que selecione todos os cadetes que estejam em algum projeto da fase 1
	3. Uma query que selecione os cadetes que entregaram o so_long

## Dicas:

- Se não ficou claro, para a primeira etapa contamos com [esse belíssimo tutorial](https://renatogroffe.medium.com/postgresql-docker-executando-uma-inst%C3%A2ncia-e-o-pgadmin-4-a-partir-de-containers-ad783e85b1a4) do Renato Groffe ensinando passo a passo como usar o PostgreSQL com Docker. Usa ele, usa...

- Uma estratégia interessante para popular tabelas com muitos dados é fazer a query em uma planilha do Google Spreadsheets, concatenando campos da planilha para gerar o `INSERT`. Se não entendeu essa dica, faz na mão mesmo que tá tranquilo! 😛
- Talvez para construir a última query do desafio (a mais difícil), você tenha que mexer na modelagem das tabelas, adicionando novas tabelas relacionadas com `Cadete` e `Projeto`
