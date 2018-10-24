#include "livro.h"
#include "biblioteca.h"
#include <string>
#include <iostream>
using namespace std;
int main(){
	Livro *l1 = new Livro("Clube Da Luta","Chuck Palahniuk","Seila","LeYa","1996","8580444497");
	Livro *l2 = new Livro();
	Biblioteca *b = new Biblioteca();
	b->addLivro(l1);
	b->addLivro(l2);
	b->BuscarNome("Clube Da Luta");
	b->BuscarNome("Harry Poter");
	b->BuscarIsbn("8580444497");
	b->BuscarIsbn("13");
	
	cout<<b->VerificarExiste(l1)<<endl;
	cout<<b->VerificarDisponiveis()<<endl;
	b->emprestar(0);
	cout<<b->VerificarDisponiveis()<<endl;
	b->emprestar(1);
	cout<<b->VerificarDisponiveis()<<endl;
	return 0;
} 