#ifndef CARRO_H
#define CARRO_H
#include <string>
using namespace std;
class Carro{
private:
	string m_modelo;
	int m_ano;
	float m_max_gasolina;
	float m_combustivel;
	float m_consumo;
	float m_distancia_percorrida;
	float m_autonomia;
public:
	Carro(string modelo_,int ano_,float max_gasolina_,float consumo_);
	~Carro();

	void abastecer (float combustivel_);
	void mover(float distancia_);
	float getQtdeCombustivel();
	float  getAutonomia();
	float getDistanciaPercorrida();
	


};
#endif