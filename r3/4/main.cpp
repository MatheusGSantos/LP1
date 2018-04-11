#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){
	Pessoa p1 = Pessoa("Paulo");
	Pessoa p2 = Pessoa("Pedro", 25, "988885557");
	Pessoa p3 = Pessoa("Carlos", 29, "988885559");
	Pessoa p4 = Pessoa("Claudio", 72, "988885527");
	
	cout<<"Nome 1: "<<p1.getNome()<<endl;
	cout<<"Idade 2: "<<p2.getIdade()<<endl;
	p3.setIdade(30);
	cout<<"Idade 3: "<<p3.getIdade()<<endl;
	p4.setTelefone("987789189");
	cout<<"Telefone 4: "<<p4.getTelefone()<<endl;
	
	return 0;
}
