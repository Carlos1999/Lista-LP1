#include "livro.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
	Livro *l = new Livro("Clube Da Luta","Chuck Palahniuk","Seila","LeYa","1996","8580444497");
	cout<<l;

	return 0;
}