#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#define MAX_LIVROS 100
#include "livro.h"
#include <string>
using namespace std;
class Biblioteca{
private:
	Livro *m_livros[MAX_LIVROS];
	int m_quantidade_livros;

public:
	Biblioteca();
	~Biblioteca();

	int getQuantidade();
	void addLivro(Livro *l);
	void BuscarNome(string nome_);
	void BuscarIsbn(string isbn_);
	bool VerificarExiste(Livro *l);
	void emprestar(int i);
	int VerificarDisponiveis();



};

#endif