#include <iostream>
#include "Despesa.h"

using namespace std;

Despesa::Despesa(){
	valor = 1;
	tipoDeGasto = "";
}

Despesa::Despesa(double v, std::string t){
	valor = v;
	tipoDeGasto = t;

	if(verificaValor() == false){
		cout << "Valor invalido e setado para 1" << endl;
		valor = 1;
	}
}

double Despesa::getValor(){
	return valor;
}

std::string Despesa::getTipoDeGasto(){
	return tipoDeGasto;
}

void Despesa::setValor(double v){
	valor = v;
}
void Despesa::setTipoDeGasto(std::string t){
	tipoDeGasto = t;
}

bool Despesa::verificaValor(){
	if(valor < 0){
		return false;
	}
	else{
		return true;
	}
}
