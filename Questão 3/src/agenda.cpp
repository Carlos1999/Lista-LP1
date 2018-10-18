#include <iostream>
#include "pessoa.h"
#include "agenda.h"
#include <string>
using namespace std;

Agenda::Agenda():
	m_total_contatos(0){
}

Agenda::~Agenda(){	
}

/* armazena um novo contato */
void Agenda::insereContato ( string nome_ , int idade_ , float altura_ ){
	Pessoa *contato_ = new Pessoa(nome_,idade_,altura_);
	if(m_total_contatos<MAX_CONTATOS){
		m_contatos[m_total_contatos++] = contato_; 
	}else{
		cout<<"Máximo de contatos atingido."<<endl;
	}
}

void Agenda::removeContato ( string nome_ ){
	for (int i = 0; i < m_total_contatos; i++){
		if(m_contatos[i]->getNome()==nome_){
			m_contatos[i]=m_contatos[m_total_contatos-1];
			m_total_contatos--;
		}
	}
}

int Agenda::buscaContato ( string nome_ ){
	for (int i = 0; i < m_total_contatos; i++){
		if(m_contatos[i]->getNome()==nome_){
		return i;
		}
	}
	return -1;
}
void Agenda::listaContato ( char letra ){
	int contador =1;
	for (int i = 0; i < m_total_contatos; i++){
		string nome_ = m_contatos[i]->getNome();
		if(nome_[0]==letra){
		cout<<contador<<": "<<m_contatos[i]->getNome()<<endl;
		contador++;
		}
	}
}
void Agenda::imprimeContato ( int i ){
	if(i<0|| i>m_total_contatos-1){
	cout<<"Número de contato inválido"<<endl;
	}else{
	cout<<"Nome: "<<m_contatos[i]->getNome()<<"| Idade: "<<m_contatos[i]->getIdade()<<"| Altura: "<<m_contatos[i]->getAltura()<<endl;
	}
}