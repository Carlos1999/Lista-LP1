#include <iostream>
#include "pessoa.h"
#include "agenda.h"
#include <string>
using namespace std;

int main(){
	Agenda *a = new Agenda();
	a->insereContato("Alberto",20,1.70);
	a->insereContato("Berigojhonson",19,1.80);
	a->insereContato("Carlos",19,1.80);
	a->insereContato("Bruno",20,1.90);
	a->insereContato("Biruleibi",30,1.60);
	

	cout<<"Localização do contato Carlos "<<a->buscaContato("Carlos")<<endl;
	a->removeContato("Carlos");
	cout<<"Localização do contato Carlos "<<a->buscaContato("Carlos")<<endl;
	
	char letra1 = 'A';
	char letra2 = 'B';
	char letra3 = 'C';

	cout<<"Lista de Contatos com a letra "<<letra1<<endl;
	a->listaContato(letra1);
	cout<<"Lista de Contatos com a letra "<<letra2<<endl;
	a->listaContato(letra2);
	cout<<"Lista de Contatos com a letra "<<letra3<<endl;
	a->listaContato(letra3);


	cout<<"Imprimindo contatos"<<endl;
	a->imprimeContato(0);
	a->imprimeContato(1);
	a->imprimeContato(2);
	a->imprimeContato(3);
	a->imprimeContato(4);
}