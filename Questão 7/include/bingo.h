#ifndef BINGO_H
#define BINGO_H
#include "sorteadora.h"
#include "cartela.h"
#include "jogador.h"	
#define MAX_JOGADORES 10
class Bingo{
private:
	Jogador *m_jogadores[MAX_JOGADORES];
	int m_quantidade_jogadores;
	Jogador *m_vencedor;
	int m_vetor_sorteados[99];
	

public:
	Bingo();
	~Bingo();
	void addJogador(Jogador *j);
	void jogar();
};
#endif