#ifndef JOGADOR_H
#define JOGADOR_H
#include "sorteadora.h"
#include "cartela.h"
#define MAX_CARTELAS 5
class Jogador{
private:
	Cartela *m_cartelas[MAX_CARTELAS];
	Cartela *m_cartela_vencedora;
	int m_quantidade_cartelas;

public:
	Jogador();
	~Jogador();
	void addCartela(Cartela *c);
	Cartela getCartelaVencedora();

};
#endif