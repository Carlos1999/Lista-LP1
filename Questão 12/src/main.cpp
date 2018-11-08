#include "pessoa.h"
#include "funcionario.h"
#include "gerente.h"
#include "assistenteTecnico.h"
#include "supervisor.h"
#include "assistenteAdministrativo.h"
#include <iostream>

using namespace std ;

int main (int argc , char const * argv []){
	AssistenteAdministrativo * AssAdm = new AssistenteAdministrativo("Carlos",19,1.80, "201738129312",100000,"noite",0.5);
	Supervisor *s = new Supervisor("João",50,1.70, "231923910", 10000000.0);
	AssistenteTecnico * assTec = new AssistenteTecnico("Carlos",19,1.80, "201738129312", 1000000.0,500.0,s);

return 0;
}