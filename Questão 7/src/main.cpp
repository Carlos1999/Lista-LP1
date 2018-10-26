#include "sorteadora.h"
#include "cartela.h"
#include "jogador.h"
#include "bingo.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	Jogador *j = new Jogador("Joice",3);
	Jogador *v = new Jogador("Carlos",3);
	Jogador *h = new Jogador("hugo",3);
		
	Bingo *b = new Bingo();
	b->addJogador(j);
	b->addJogador(v);
	b->addJogador(h);

	b->jogar();

	return 0;
}