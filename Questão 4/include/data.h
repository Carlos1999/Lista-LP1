#ifndef DATA_H
#define DATA_H

class Data{
private:
	int m_dia;
	int m_mes;
	int m_ano;

public:
	Data(int dia_, int mes_, int ano_);
	Data();
	~Data();
	
	int getDia();
	int getMes();
	int getAno();	

	void somarDias(int dias_);
	void somarMeses(int meses_);  
	void somarAnos(int anos_);
	void proximoDia();
	
};
#endif