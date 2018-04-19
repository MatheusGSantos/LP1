#ifndef CONTROLEDEGASTOS_H_
#define CONTROLEDEGASTOS_H_
#include "Despesa.h"
#include <string>

using namespace std;

class ControleDeGastos{

    Despesa *despesas1;
    Despesa *despesas2;
public:
	ControleDeGastos();
	void setDespesas(double v, double v1, std::string t, std::string t1);
	double calculaTotalDeDespesas();
	bool existeDespesaDoTipo(std::string t);

};

#endif /* CONTROLEDEGASTOS_H_ */
