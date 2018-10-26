#ifndef SORTEADORA_H
#define SORTEADORA_H
#include <random>
using namespace std;
class Sorteadora{
private:
	int m_numero;
	int m_vetor_sorteados_cartela[15];
	int m_vetor_sorteados_bingo[99];
	random_device rd;
	default_random_engine gen;
	uniform_int_distribution<> dis;

public:

	Sorteadora();
	~Sorteadora();

	int sortearCartela(int numero);
	int sortearBingo(int numero);
	int presente(int numero,int quantidade_);

};
#endif