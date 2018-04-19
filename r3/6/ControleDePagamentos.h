#include "Pagamento.h"
#include <iostream>
#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

class ControleDePagamentos
{
    Pagamento *pagamentos1;
	Pagamento *pagamentos2;
public:
	ControleDePagamentos();
	void setPagamentos(double v, double v1, std::string n, std::string n1);
	double calculaTotalDePagamentos();
	bool existePagamentoParaFuncionario(std::string nomeFuncionario);
};

#endif
