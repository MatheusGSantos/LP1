#include <iostream>

#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
private:
	std::string nome;
	int idade;
	std::string telefone;

public:
	Pessoa(std::string n);
	Pessoa(std::string n, int i, std::string t);
	std::string getNome();
	std::string getTelefone();
	int getIdade();
	void setNome(std::string n);
	void setTelefone(std::string t);
	void setIdade(int i);
	virtual ~Pessoa();
};

#endif
