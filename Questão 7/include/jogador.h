#ifndef JOGADOR_H
#define JOGADOR_H
#include "sorteadora.h"
#include "cartela.h"
#include <string>
#include <ostream>
#define MAX_CARTELAS 5
using namespace std;
class Jogador{
private:
	string m_nome;
	Cartela *m_cartelas[MAX_CARTELAS];
	Cartela *m_cartela_vencedora;
	int m_quantidade_cartelas;

public:
	Jogador(string nome_,int quantidade_cartelas_);
	~Jogador();

	Cartela * getCartelaVencedora();
	void setCartelaVencedora(int numero_cartela);
	int getQuantidadeCartelas();
	string getNome();
	int presente(int vetor[], int quantidade_);
	friend ostream& operator<< (ostream &o, Jogador * j);
};
#endif