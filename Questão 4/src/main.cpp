#include "data.h"
#include <iostream>
using namespace std;
int main(){
	Data *d = new Data();
	cout<<d->getDia()<<endl;
	cout<<d->getMes()<<endl;
	cout<<d->getAno()<<endl;
	d->somarDias(100);

	cout<<d->getDia()<<endl;
	cout<<d->getMes()<<endl;
	cout<<d->getAno()<<endl;


	return 0;
}