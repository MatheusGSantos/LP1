#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

ControleDeGastos::ControleDeGastos(){};

void ControleDeGastos::setDespesas(double v, double v1, string t, string t1){

	despesas1 = new Despesa(v, t);
    despesas2 = new Despesa(v1,t1);
}

double ControleDeGastos::calculaTotalDeDespesas(){
	return despesas1->getValor() + despesas2->getValor();
}
bool ControleDeGastos::existeDespesaDoTipo(std::string t){

	if(despesas1->getTipoDeGasto() == t || despesas2->getTipoDeGasto() == t){
        return true;
	}else{
	    return false;
    }
}
