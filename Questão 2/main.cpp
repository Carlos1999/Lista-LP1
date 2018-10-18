#include <string>
#include <iostream>
#include "pessoa.h"
using namespace std;
int main(){
	Pessoa *p = new Pessoa("Carlos",19,1.80);
	cout<<p;

	return 0;
}