DOCKER_IMAGE=mysql-dojo
DOCKER_NAME=dojo-sql

all: run
	@sleep 60
	@echo "Your user is guest and password is guest"
	@docker exec -it $(DOCKER_NAME) bash
.PHONY: all

run: build
	@echo "Running..."
	@docker run -d --name $(DOCKER_NAME) $(DOCKER_IMAGE)
.PHONY: run

build:
	@echo "Building..."
	@docker build -t $(DOCKER_IMAGE) .
.PHONY: build

clear:
	@echo "Clearing..."
	@docker stop $(DOCKER_NAME) || true
	@docker rm $(DOCKER_NAME) || true
	@docker rmi $(DOCKER_IMAGE) || true
.PHONY: clear

re:
	@make clear
	@make all
.PHONY: re
