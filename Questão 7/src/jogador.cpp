#include "sorteadora.h"
#include "cartela.h"
#include "jogador.h"
Jogador::Jogador():
	m_quantidade_cartelas(0){

}
Jogador::~Jogador(){
}


void Jogador::addCartela(Cartela *c){
	if(m_quantidade_cartelas<MAX_CARTELAS){
		m_cartelas[m_quantidade_cartelas++]=c;
	}
}

Cartela Jogador::getCartelaVencedora(){
	return m_cartela_vencedora;
}