#include "sorteadora.h"
#include <random>

using namespace std;
Sorteadora::Sorteadora():
	m_numero(0),rd(), gen(rd()), dis(1, 99){
		for (int i = 0; i < 15; ++i)
		{
			m_vetor_sorteados[i]=0;
		}
}
Sorteadora::~Sorteadora(){

}

int Sorteadora::sortear(int numero){
	int sorteado= round(dis(gen));

	while(presente(sorteado)==1){
		sorteado= round(dis(gen));
	}
	m_vetor_sorteados[numero]=sorteado;
	return sorteado;
}

int Sorteadora::presente(int numero){
	for (int i = 0; i < 12; ++i){
		if(numero == m_vetor_sorteados[i]){
			return 1;
		}
	}
	return 0;
}