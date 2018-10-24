#ifndef BINGO_H
#define BINGO_H
#include "sorteadora.h"
#include "cartela.h"
#include "jogador.h"
#define MAX_JOGADORES 10
class Jogador{
private:
	Jogador *m_Jogadores[MAX_JOGADORES];
	Jogador *m_vencedor;
	int m_quantidade_jogadores;

public:
	Jogador();
	~Jogador();
	void addJogador(Jogador *j);
};
#endif