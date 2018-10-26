#include "sorteadora.h"
#include <random>

using namespace std;
Sorteadora::Sorteadora():
	m_numero(0),rd(), gen(rd()), dis(1, 99){
		for (int i = 0; i < 15; ++i){
			m_vetor_sorteados_cartela[i]=0;

		}
		for (int i = 0; i < 99; ++i){
			m_vetor_sorteados_bingo[i]=0;

		}		
}
Sorteadora::~Sorteadora(){

}

int Sorteadora::sortearCartela(int numero){
	int sorteado= round(dis(gen));

	while(presente(sorteado,numero+1)==1){
		sorteado= round(dis(gen));
	}
	m_vetor_sorteados_cartela[numero]=sorteado;
	return sorteado;
}

int Sorteadora::sortearBingo(int numero){
	int sorteado= round(dis(gen));

	while(presente(sorteado,numero+1)==1){
		sorteado= round(dis(gen));
	}
	m_vetor_sorteados_cartela[numero]=sorteado;
	return sorteado;
}

int Sorteadora::presente(int numero,int quantidade_){
	for (int i = 0; i < quantidade_; ++i){
			if(numero == m_vetor_sorteados_cartela[i]){
				return 1;
			}
		}
	
	return 0;
}