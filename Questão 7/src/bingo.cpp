#include "sorteadora.h"
#include "cartela.h"
#include "jogador.h"
#include "bingo.h"
#include <iostream>
using namespace std;
Bingo::Bingo():
	m_quantidade_jogadores(0),m_vencedor(nullptr){
}
Bingo::~Bingo(){
}

void Bingo::addJogador(Jogador *j){
	if(m_quantidade_jogadores <MAX_JOGADORES){
		m_jogadores[m_quantidade_jogadores++] = j;
	}
}

void Bingo::jogar(){
	Sorteadora *s = new Sorteadora();
	int i = 0;

	while(m_vencedor == nullptr&&i<99){
		m_vetor_sorteados[i] = s->sortearBingo(i);
	
		for (int j = 0; j < m_quantidade_jogadores; j++){
			for (int k = 0; k < m_jogadores[j]->getQuantidadeCartelas(); k++){
				if(m_jogadores[j]->presente(m_vetor_sorteados,i)!=-1){
					m_vencedor = m_jogadores[j];
					m_jogadores[j]->setCartelaVencedora(k);
				}
			}			
		}
		i++;	
	}

	cout<<"Vencedor é: "<<m_vencedor->getNome()<<endl;
	cout<<"Cartela Vencedora foi:"<<endl;
	cout<<m_vencedor->getCartelaVencedora()<<endl;
}