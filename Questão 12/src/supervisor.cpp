#include "supervisor.h"
#include <string>

using namespace std;
Supervisor::Supervisor(string nome_,int idade_,float altura_, string matricula_, float salario_):
	Funcionario(nome_,idade_,altura_,matricula_,salario_){

}

Supervisor::~Supervisor(){
}
