#include <iostream>

#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado
{
private:
	std::string nome;
	std::string sobrenome;
	double salario;

public:
	Empregado();
	Empregado(std::string n, std::string sn, double s);
	std::string getNome();
	std::string getSobreNome();
	double getSalario();
	void setNome(std::string n);
	void setSobreNome(std::string sn);
	void setSalario(double s);
	virtual ~Empregado();
};

#endif
