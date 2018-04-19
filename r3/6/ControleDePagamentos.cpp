#include "ControleDePagamentos.h"
#include <iostream>
using namespace std;

ControleDePagamentos::ControleDePagamentos(){
}

void ControleDePagamentos::setPagamentos(double v, double v1, string n, string n1){

	pagamentos1 = new Pagamento(v,n);
	pagamentos2 = new Pagamento(v1,n1);
}

double ControleDePagamentos::calculaTotalDePagamentos(){
	return pagamentos1->getValorPagamento()+pagamentos2->getValorPagamento();
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nomeFuncionario){
	if(pagamentos1->getNomeDoFuncionario() == nomeFuncionario || pagamentos2->getNomeDoFuncionario() == nomeFuncionario)
		return true;
	return false;
}
