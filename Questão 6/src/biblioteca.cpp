#include <string>
#include <iostream>
#include "biblioteca.h"
#include "livro.h"
using namespace std;
Biblioteca::Biblioteca(){
	m_quantidade_livros = 0;
}

Biblioteca::~Biblioteca(){
}

int Biblioteca::getQuantidade(){
	return m_quantidade_livros;
}
void Biblioteca::addLivro(Livro *l){
	if(m_quantidade_livros<MAX_LIVROS){
		m_livros[m_quantidade_livros++]= l;

	}
}

void Biblioteca::BuscarNome(string nome_){
	int encontrado =0;
	for (int i = 0; i < m_quantidade_livros; i++){
		if(m_livros[i]->getTitulo() == nome_){
			cout<<m_livros[i]<<endl;
			encontrado =1;
		}
	}
	if(encontrado ==0){
		cout<<"Livro não encontrado"<<endl;
	}
}

void Biblioteca::BuscarIsbn(string isbn_){
	int encontrado =0;
	for (int i = 0; i < m_quantidade_livros; i++){
		if(m_livros[i]->getIsbn() == isbn_){
			cout<<m_livros[i]<<endl;
			encontrado =1;
		}
	}
	if(encontrado ==0){
		cout<<"Livro não encontrado"<<endl;
	}
}

bool Biblioteca::VerificarExiste(Livro *l){
	for (int i = 0; i < m_quantidade_livros; i++){
		if(m_livros[i] == l){
			return true;
		}
	}
	return false;
}

void Biblioteca::emprestar(int i){
	if(m_livros[i]->getEmprestado()==false){
		m_livros[i]->setEmprestado(true);
	}else{
		cout<<"Livro "<<m_livros[i]->getTitulo()<<" Já Emprestado"<<endl;
	}
}
int Biblioteca::VerificarDisponiveis(){
	int contador =0;
	for (int i = 0; i < m_quantidade_livros; ++i){
		if(m_livros[i]->getEmprestado()==false){
			contador++;
		}
	}
	return contador;
}
	
