#ifndef SORTEADORA_H
#define SORTEADORA_H
#include <random>
using namespace std;
class Sorteadora{
private:
	int m_numero;
	int m_vetor_sorteados[15];
	random_device rd;
	default_random_engine gen;
	uniform_int_distribution<> dis;

public:

	Sorteadora();
	~Sorteadora();

	int sortear(int numero);

	int presente(int numero);

};
#endif