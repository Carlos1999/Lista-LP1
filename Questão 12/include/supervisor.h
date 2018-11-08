#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include "funcionario.h"
#include <string>
class Supervisor: public Funcionario{
private:

public:
	Supervisor(std::string nome_,int idade_,float altura_, std::string matricula_, float salario_);
	~Supervisor();
};
#endif