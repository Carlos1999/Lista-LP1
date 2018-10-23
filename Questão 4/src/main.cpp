#include "data.h"
#include <iostream>
using namespace std;
int main(){
	Data *d = new Data();
	cout<<d;
	d->somarDias(365);

	cout<<d;

	
	return 0;
}