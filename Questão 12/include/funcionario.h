#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "pessoa.h"
#include <string>
class Funcionario: public Pessoa{
private:
	std::string m_matricula;
	float m_salario;

public:
	Funcionario(std::string nome_,int idade_,float altura_, std::string matricula_, float salario_);
	~Funcionario();
	std::string getMatricula();
	void setMatricula(std::string matricula_);
	float getSalario();
	void setSalario(float salario_);
};
#endif