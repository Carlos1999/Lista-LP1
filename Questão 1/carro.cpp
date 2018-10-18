#include "carro.h"
#include <string>
#include <iostream>

using namespace std;
Carro::Carro(string modelo_,int ano_,float max_gasolina_,float consumo_):
	m_modelo(modelo_),m_ano(ano_),m_max_gasolina(max_gasolina_),m_consumo(consumo_),m_combustivel(0),m_distancia_percorrida(0),m_autonomia(0){
	cout<<"Foi criado um "<<m_modelo<<" , ano "<<m_ano<<". Suporta "<<m_max_gasolina<<" litros e consome "<<m_consumo<<" km / L ."<<endl;
}
Carro::~Carro(){
}


void Carro::abastecer (float combustivel_){
	if(combustivel_+m_combustivel>m_max_gasolina){
		cout<<"Ultrapassado o máximo de combustível, será abastecido somente até o limite de "<<m_max_gasolina<<" litros."<<endl;
		m_combustivel=m_max_gasolina;
	}else if(combustivel_>0){
		m_combustivel+=combustivel_;
		m_autonomia=(m_combustivel-1)*m_consumo;
	}

}

void Carro::mover(float distancia_){
	if(m_combustivel<=1){
		cout<<"Combustivel insuficiente para mover ."<<endl;
	}else if(distancia_/m_consumo>m_combustivel){
		cout<<"Combustivel insuficiente para mover ."<<endl;
	}else if(distancia_/m_consumo<m_combustivel){
		m_distancia_percorrida+=distancia_;
		m_combustivel=m_combustivel-(distancia_/m_consumo);
		m_autonomia=(m_combustivel-1)*m_consumo;
	}
}

float Carro::getQtdeCombustivel(){
	return m_combustivel;
}

float  Carro::getAutonomia(){
	return m_autonomia;
}

float Carro::getDistanciaPercorrida(){
	return m_distancia_percorrida;
}
