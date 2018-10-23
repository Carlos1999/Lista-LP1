#include "data.h"
#include <iostream>
#include <string>
#include <time.h>
#include <ostream>
using namespace std;
Data::Data(int dia_, int mes_, int ano_):
	m_dia(dia_),m_mes(mes_),m_ano(ano_){
}

Data::Data(){
	time_t segundos;     
    time(&segundos); 
    struct tm * timeinfo;     
    timeinfo = localtime(&segundos);     
    m_dia = timeinfo->tm_mday; 
    m_mes = timeinfo->tm_mon+1;
    m_ano = timeinfo->tm_year+1900;
}

Data::~Data(){
}

int Data::getDia(){
	return m_dia;
}
int Data::getMes(){
	return m_mes;
}
int Data::getAno(){
	return m_ano;
}	

void Data::somarDias(int dias_){
	//Vetor para armazenar quantos dias tem em cada mês
	int vetor_meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int total_dias = m_dia + dias_;
	//If para saber quais são os meses com 31 dias

	if(m_mes==1||m_mes==3||m_mes==5||m_mes==7||m_mes==8||m_mes==10||m_mes==12 ){
		//Se o dia atual mais o acréscimo dos dias for maior que 31
		if(total_dias>31){
			//Ultra_mes armazena quantos meses foram ultrapassados do atual
			int ultra_mes = 0;
			//For para ir subtraindo os dias e colocando os meses que ultrapassam 

			for (int i = m_mes-1; total_dias> 31 ; i++){
 
				total_dias -= vetor_meses[i];
				ultra_mes++;	
				
				if(i ==11){
					i=-1;
				}
			}

			m_dia = total_dias;
			somarMeses(ultra_mes); 
		}else{
			m_dia+=dias_;
		}



	}else if(m_mes==4||m_mes==6||m_mes==9||m_mes==11){
		
		if(total_dias>30){
		
			int ultra_mes = 0;

			for (int i = m_mes-1; dias_ +m_dia> 30 ; i++){
			
				total_dias -= vetor_meses[i];
				ultra_mes++;

				if(i ==11){
					i=-1;
				}

			}

			m_dia = dias_;
			somarMeses(ultra_mes); 

		}else{
			m_dia+=dias_;
		}


	}else if(m_mes==2){
		if(total_dias>28){
		
			int ultra_mes = 0;

			for (int i = m_mes-1; dias_ +m_dia> 28 ; i++){
			
				total_dias -= vetor_meses[i];
				ultra_mes++;

				if(i ==11){
					i=-1;
				}
			}

			m_dia = dias_;
			somarMeses(ultra_mes); 

		}else{
			m_dia+=dias_;
		}
	}

}


void Data::somarMeses(int meses_){
	int total_meses = meses_ + m_mes;
	if(total_meses>12){
			int ultra_anos = 0;

			while(total_meses>12){
				total_meses -= 12;
				ultra_anos++;
			}
			
			
			m_mes = total_meses;
			somarAnos(ultra_anos); 
		}else{
			m_mes+=meses_;
	}
}  
void Data::somarAnos(int anos_){
	m_ano+=anos_;
}

void Data::proximoDia(){
	somarDias(1);
}

ostream& operator<< (ostream &o, Data *d) {
o<< d->getDia() << "/" << d->getMes() << "/" << d->getAno()<<endl;
return o;
}