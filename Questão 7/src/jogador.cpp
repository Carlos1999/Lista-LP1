#include "sorteadora.h"
#include "cartela.h"
#include "jogador.h"
#include <ostream>
#include <iostream>
using namespace std;
Jogador::Jogador(string nome_,int quantidade_cartelas_){
		
		if(quantidade_cartelas_<=MAX_CARTELAS&& quantidade_cartelas_>0){
			m_nome = nome_;
			m_quantidade_cartelas = quantidade_cartelas_;
		
			for (int i = 0; i < quantidade_cartelas_; i++){
				Cartela *c = new Cartela(i);
				m_cartelas[i] = c;
			}
		}else{
			cout<<"Quantidade de cartelas inválida"<<endl;
		}
}
Jogador::~Jogador(){
}



Cartela * Jogador::getCartelaVencedora(){
	return m_cartela_vencedora;
}

void Jogador::setCartelaVencedora(int numero_cartela){
	m_cartela_vencedora = m_cartelas[numero_cartela];
}

int Jogador::getQuantidadeCartelas(){
	return m_quantidade_cartelas;
}

string Jogador::getNome(){
	return m_nome;
}

ostream& operator<< (ostream &o, Jogador *j) {

	for (int i = 0; i < j->m_quantidade_cartelas; i++){
			o<<j->m_cartelas[i]<<endl;
		
	}
	
return o;
}

int Jogador::presente(int vetor[], int quantidade_){
	int contador_presentes=0;

	for (int i = 0; i < m_quantidade_cartelas; i++){

		for (int j = 0; j < quantidade_; j++){
			if(m_cartelas[i]->presente(j)==1){
				contador_presentes++;
			}
		}

		if(contador_presentes==14){
			return i;
		}
	
		contador_presentes =0;
	}
	return -1;
}