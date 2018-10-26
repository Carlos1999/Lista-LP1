#include "cartela.h"
#include "sorteadora.h"
#include <iostream>
#include <ostream>

using namespace std;
Cartela::Cartela(int numeroCartela_):
	m_numeroCartela(numeroCartela_){
	Sorteadora *sorteadora = new Sorteadora();

	for (int i = 0; i < 15; i++){
		m_vetor_sorteados[i] = sorteadora->sortearCartela(i);
	}

}

Cartela::~Cartela(){
}


ostream& operator<< (ostream &o, Cartela *c) {
	o<<"Cartela "<<c->m_numeroCartela<<":"<<endl;
	for (int i = 0; i < 15; i++){
		if(c->getNumero(i)<10){
		o<<c->getNumero(i)<<"  | ";
		}else{	
		o<<c->getNumero(i)<<" | ";
		}
		
		if((i+1)%5==0){
		o<<endl;	
		}
	}
return o;
}

int Cartela::getNumero(int numero_){
	return m_vetor_sorteados[numero_];
}

int Cartela::getNumeroCartela(){
	return m_numeroCartela;
}


int Cartela::presente(int numero_){
	for (int i = 0; i < 15; ++i){
			if(numero_ == m_vetor_sorteados[i]){
				return 1;
			}
		}
	
	return 0;
}