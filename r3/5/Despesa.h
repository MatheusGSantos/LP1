#ifndef DESPESAs_H_
#define DESPESA_H_
#include <string>

class Despesa {

    double valor;
	std::string tipoDeGasto;

public:
	Despesa();
	Despesa(double v, std::string t);
	bool verificaValor();
	double getValor();
	std::string getTipoDeGasto();
	void setValor(double v);
	void setTipoDeGasto(std::string t);
};

#endif /* DESPESAS_H_ */
