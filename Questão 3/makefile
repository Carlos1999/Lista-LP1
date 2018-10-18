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
OBJS = $(OBJ)/agenda.o $(OBJ)/pessoa.o $(OBJ)/main.o 

all:mkdirs $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/pessoa.o: $(INC)/pessoa.h $(SRC)/pessoa.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/pessoa.cpp -o $(OBJ)/pessoa.o

$(OBJ)/agenda.o: $(INC)/agenda.h $(SRC)/agenda.cpp  $(INC)/pessoa.h $(SRC)/pessoa.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/agenda.cpp -o $(OBJ)/agenda.o

$(OBJ)/main.o: $(INC)/pessoa.h   $(INC)/agenda.h $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

mkdirs: 
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

run:
	$(BIN)/teste

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*
	