#!/bin/bash

ECHO=/usr/bin/echo
CAT=/usr/bin/cat

selectMakefile () {
	case $($CAT .env) in
		"CODAM") $ECHO -e -n > Makefile "#CODAM
NAME=Tron.exec
NAME_BONUS=Tron.bonus
GCC_FLAGS=-Wall -Wextra -Werror
MLX_LIB=MLX42/build/libmlx42.a
MLX_FLAGS=-LMLX42/build -lmlx42 -lm -ldl -pthread -lglfw
REMOVE=/usr/bin/rm -fr
SRC=\${wildcard *.c}
BONUS_SRC=\${wildcard bonus/*.c}

all: \${MLX_LIB} \${NAME}
.PHONY: all

\${NAME}: \${SRC}
	cc \${GCC_FLAGS} -I. \${MLX_FLAGS} \${SRC} -o \${NAME}

\${MLX_LIB}:
ifeq (, \${wildcard MLX42/build})
	cmake -S MLX42 -B MLX42/build
	cmake --build MLX42/build
endif
	make -j4 -C MLX42/build

fclean:
	\${REMOVE} MLX42/build \${NAME} \${NAME_BONUS}
.PHONY:clean

re: fclean
ifneq (, \${wildcard \${NAME_BONUS}})
	make SRC=\"\${BONUS_SRC}\"
else
	make
endif
.PHONY:re" ;;
		"FRENCH") $ECHO -n -e > Makefile "#FRENCH\n" ;;
		*) $ECHO "Error: .env!"; rm -fr .env Makefile;;
	esac
}

if test -f .env
then
	selectMakefile
else
	$ECHO "Are you going to use [C]odam or [F]rench MiniLibX?"
	while true
	do
		read -n1 -r -p "> " CHOICE
		$ECHO
		case $CHOICE in
			"C") $ECHO -n "CODAM" > $PWD/.env ;;
			"c") $ECHO -n "CODAM" > $PWD/.env ;;
			"F") $ECHO -n "FRENCH" > $PWD/.env ;;
			"f") $ECHO -n "FRENCH" > $PWD/.env ;;
			*) $ECHO "Error: input!";;
		esac
		sleep 1
		if test -f .env
		then
			break
		fi
	done
	selectMakefile
fi
