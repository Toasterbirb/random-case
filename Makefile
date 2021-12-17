CC=gcc
SRC=./main.c
BIN=random_case

all:
	${CC} ${SRC} -o ${BIN}
