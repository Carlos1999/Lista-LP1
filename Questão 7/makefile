# Makefile for Laboratório 1
# Created by Carlos Vinícius 20/09/2018
# Makefile para executar o segundo exercício do laboratório 1

CC = g++
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build

PROG = $(BIN)/teste
OBJS = $(OBJ)/sorteadora.o $(OBJ)/cartela.o $(OBJ)/jogador.o $(OBJ)/bingo.o $(OBJ)/main.o 

all:mkdirs $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/sorteadora.o: $(INC)/sorteadora.h $(SRC)/sorteadora.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/sorteadora.cpp -o $(OBJ)/sorteadora.o

$(OBJ)/cartela.o: $(INC)/cartela.h $(SRC)/cartela.cpp $(INC)/sorteadora.h $(SRC)/sorteadora.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/cartela.cpp -o $(OBJ)/cartela.o

$(OBJ)/jogador.o: $(INC)/jogador.h $(SRC)/jogador.cpp $(INC)/cartela.h $(SRC)/cartela.cpp $(INC)/sorteadora.h $(SRC)/sorteadora.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/jogador.cpp -o $(OBJ)/jogador.o

$(OBJ)/bingo.o: $(INC)/bingo.h $(SRC)/bingo.cpp $(INC)/jogador.h $(SRC)/jogador.cpp $(INC)/cartela.h $(SRC)/cartela.cpp $(INC)/sorteadora.h $(SRC)/sorteadora.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/bingo.cpp -o $(OBJ)/bingo.o

$(OBJ)/main.o:$(INC)/jogador.h $(INC)/bingo.h $(INC)/sorteadora.h $(INC)/cartela.h $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

mkdirs: 
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

run:
	$(BIN)/teste

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*
	