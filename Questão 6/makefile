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
OBJS = $(OBJ)/livro.o $(OBJ)/biblioteca.o $(OBJ)/main.o 

all:mkdirs $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/livro.o: $(INC)/livro.h $(SRC)/livro.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/livro.cpp -o $(OBJ)/livro.o

$(OBJ)/biblioteca.o: $(INC)/biblioteca.h $(SRC)/biblioteca.cpp $(INC)/livro.h $(SRC)/livro.cpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/biblioteca.cpp -o $(OBJ)/biblioteca.o

$(OBJ)/main.o: $(INC)/livro.h $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

mkdirs: 
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

run:
	$(BIN)/teste

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*
	