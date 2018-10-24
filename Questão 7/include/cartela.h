#ifndef CARTELA_H
#define CARTELA_H
#include "sorteadora.h"
#include <ostream>
using namespace std;
class Cartela{
private:
	int m_vetor_sorteados[15];	

public:

	Cartela();
	~Cartela();
	friend ostream& operator<< (ostream &o, Cartela * c);
	int getNumero(int numero_);
};
#endif