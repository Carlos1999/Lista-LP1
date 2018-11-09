#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include "funcionario.h"
#include <string>
#include <iostream>
using namespace std;
class Supervisor: public Funcionario{
private:

public:
	Supervisor(string nome_,int idade_,float altura_, string matricula_, float salario_);
	~Supervisor();
	void print();
};
#endif