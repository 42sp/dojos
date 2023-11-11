#!/bin/bash

ECHO=/usr/bin/echo
CAT=/usr/bin/cat
UNZIP=/usr/bin/unzip

selectMakefile () {
	case $($CAT .env) in
		"CODAM") if test ! -d MLX42
			then
				$UNZIP ../MLX42.zip
			fi
			$ECHO -e -n > Makefile "#CODAM
NAME=Tron.exec
NAME_BONUS=Tron.bonus
GCC_FLAGS=-Wall -Wextra -Werror
MLX_LIB=MLX42/build/libmlx42.a
MLX_FLAGS=-LMLX42/build -lmlx42 -lm -ldl -pthread -lglfw
REMOVE=/usr/bin/rm -fr
YOUR_SRC=\${wildcard source/*.c}
YOUR_BONUS_SRC=\${wildcard bonus/*.c}

all: \${MLX_LIB} \${NAME}
.PHONY: all

\${NAME}: \${YOUR_SRC}
	cc \${GCC_FLAGS} -I. \${MLX_FLAGS} \${YOUR_SRC} -o \${NAME}

\${MLX_LIB}:
ifeq (, \${wildcard MLX42/build})
	cmake -S MLX42 -B MLX42/build
	cmake --build MLX42/build
endif
	make -j4 -C MLX42/build

bonus:
	make YOUR_SRC=\"\${YOUR_BONUS_SRC}\" NAME=\${NAME_BONUS}

fclean:
	\${REMOVE} MLX42/build \${NAME} \${NAME_BONUS}
.PHONY:clean

re: fclean
ifneq (, \${wildcard \${NAME_BONUS}})
	make YOUR_SRC=\"\${YOUR_BONUS_SRC}\"
else
	make
endif
.PHONY:re" ;;
		"FRENCH") if test ! -d minilibx-linux
			then
				$UNZIP ../minilibx-linux.zip
			fi
			$ECHO -n -e > Makefile "#FRENCH
NAME=Tron.exec
NAME_BONUS=Tron.bonus
GCC_FLAGS=-Wall -Wextra -Werror
MLX_LIB=minilibx-linux/libmlx.a
MLX_FLAGS=-Lminilibx-linux -lmlx -lX11 -lXext
REMOVE=/usr/bin/rm -fr
YOUR_SRC=\${wildcard source/*.c}
YOUR_BONUS_SRC=\${wildcard bonus/*.c}

all: \${MLX_LIB} \${NAME}
.PHONY: all

\${NAME}: \${YOUR_SRC}
	cc \${GCC_FLAGS} -I. \${MLX_FLAGS} \${YOUR_SRC} -o \${NAME}

\${MLX_LIB}:
	make -C minilibx-linux

bonus:
	make YOUR_SRC=\"\${YOUR_BONUS_SRC}\" NAME=\${NAME_BONUS}

fclean:
	\${REMOVE} mini*linux/*.a mini*linux/Makefile.gen mini*linux/obj \${NAME} \
		\${NAME_BONUS}
.PHONY:clean

re: fclean
ifneq (, \${wildcard \${NAME_BONUS}})
	make YOUR_SRC=\"\${YOUR_BONUS_SRC}\"
else
	make
endif
.PHONY:re" ;;
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
