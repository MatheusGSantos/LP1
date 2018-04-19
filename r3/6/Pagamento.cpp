#include <iostream>
#include "Pagamento.h"

using namespace std;

Pagamento::Pagamento(){
	valorPagamento = 0.0;
	nomeDoFuncionario = "";
}

Pagamento::Pagamento(double v, std::string n){
	valorPagamento = v;
	nomeDoFuncionario = n;
}

void Pagamento::setValorPagamento(double v){
	valorPagamento = v;
}

double Pagamento::getValorPagamento(){
	return valorPagamento;
}

void Pagamento::setNomeDoFuncionario(std::string n){
	nomeDoFuncionario = n;
}

std::string Pagamento::getNomeDoFuncionario(){
	return nomeDoFuncionario;
}
