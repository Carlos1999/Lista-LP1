#include "supervisor.h"
#include <string>
#include <iostream>
using namespace std;
Supervisor::Supervisor(string nome_,int idade_,float altura_, string matricula_, float salario_):
	Funcionario(nome_,idade_,altura_,matricula_,salario_){

}

Supervisor::~Supervisor(){
}


void Supervisor::print() {
	cout<< "Nome:" << getNome() << "|" << "Idade"<<getIdade() << "|" <<"Altura: " <<getAltura()<<endl;
	cout<< "Matricula"<<  getMatricula() <<"|" <<"Salario: " << getSalario() <<endl;
}