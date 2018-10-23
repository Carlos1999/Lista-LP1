#include "livro.h"
#include <string>
#include <ostream>
using namespace std;
Livro::Livro(string titulo_,string autor_,string edicao_,string editora_,string ano_,string isbn_):
	m_titulo(titulo_),m_autor(autor_),m_edicao(edicao_),m_editora(editora_),m_ano(ano_),m_isbn(isbn_),m_emprestado(false){
}

Livro::Livro(){
	 m_titulo = "Null";
	 m_autor = "Null";
	 m_edicao = "Null";
	 m_editora = "Null";
	 m_ano = "Null"; 
	 m_isbn = "Null";
	 m_emprestado=false;
}
Livro::~Livro(){
}

void Livro::setTitulo(string titulo_){
	m_titulo = titulo_;
}

string Livro::getTitulo(){
	return m_titulo;
}

void Livro::setAutor(string autor_){
	m_autor = autor_;
}
string Livro::getAutor(){
	return m_autor;
}

void Livro::setEdicao(string edicao_){
	m_edicao = edicao_;
}
string Livro::getEdicao(){
	return m_edicao;
}

void Livro::setEditora(string editora_){
	m_editora = editora_;
}
string Livro::getEditora(){
	return m_editora;
}

void Livro::setAno(string ano_){
	m_ano = ano_;
}
string Livro::getAno(){
	return m_ano;
}

void Livro::setIsbn(string isbn_){
	m_isbn = isbn_;
}
string Livro::getIsbn(){
	return m_isbn;
}

bool Livro::getEmprestado(){
	return m_emprestado;
}
void Livro::setEmprestado(bool emprestado_){
	m_emprestado = emprestado_;
}


ostream& operator<< (ostream &o, Livro *l) {
o<<"Título: " <<l->getTitulo() <<endl;
o<<"Autor: " << l->getAutor() <<endl;
o<<"Edição: " << l->getEdicao() <<endl;
o<<"Editora: " << l->getEditora() <<endl;
o<<"Ano: " << l->getAno() <<endl;
o<<"Isbn: " << l->getIsbn() <<endl;
return o;
}