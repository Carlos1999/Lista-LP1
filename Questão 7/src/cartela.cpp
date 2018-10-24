#include "cartela.h"
#include "sorteadora.h"
#include <iostream>
#include <ostream>

using namespace std;
Cartela::Cartela(){
	Sorteadora *sorteadora = new Sorteadora();

	for (int i = 0; i < 15; i++){
		m_vetor_sorteados[i] = sorteadora->sortear(i);
	}
}

Cartela::~Cartela(){

}


ostream& operator<< (ostream &o, Cartela *c) {

	o<<"Números da Cartela" <<endl;
	for (int i = 0; i < 15; i++){
		o<<c->getNumero(i)<<endl;
	}
return o;
}

int Cartela::getNumero(int numero_){
	return m_vetor_sorteados[numero_];
}