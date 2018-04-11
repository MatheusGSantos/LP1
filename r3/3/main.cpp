#include <iostream>
#include "Empregado.h"

using namespace std;

int main()
{	
	Empregado e1 = Empregado("Julio", "Borges",3700);
	Empregado e2 = Empregado("Jardy", "Neidy", 11600);
	
	cout<<"Salario Anual 1: "<<e1.getSalario()*12<<"\nSalario Anual 2: "<<e2.getSalario()*12<<endl;
	e1.setSalario(e1.getSalario()*1.1);
	e2.setSalario(e2.getSalario()*1.1);
	cout<<"\n__Salarios Apos Aumento de 10%__\n"<<endl;
	cout<<"Salario Anual 1: "<<e1.getSalario()*12<<"\nSalario Anual 2: "<<e2.getSalario()*12<<endl;
	
	return 0;
}
