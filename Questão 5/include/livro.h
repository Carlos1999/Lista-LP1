#ifndef LIVRO_H
#define LIVRO_H
#include <string>
#include <ostream>
using namespace std;
class Livro{
private:
	string m_titulo;
	string m_autor;
	string m_edicao;
	string m_editora;
	string m_ano; 
	string m_isbn;

public:
	Livro(string titulo_,string autor_,string edicao_,string editora_,string ano_,string isbn_);
	Livro();
	~Livro();

	void setTitulo(string titulo_);
	string getTitulo();

	void setAutor(string autor_);
	string getAutor();

	void setEdicao(string edicao_);
	string getEdicao();

	void setEditora(string editora_);
	string getEditora();

	void setAno(string ano_);
	string getAno();

	void setIsbn(string isbn_);
	string getIsbn();
	

	friend ostream& operator<< (ostream &o, Livro * l);

};

#endif