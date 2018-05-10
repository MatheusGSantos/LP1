#include "Trabalhador.h"

using namespace std;

Trabalhador::Trabalhador(){
	this->nome = "";
	this->salario = 0.0;
}
Trabalhador::Trabalhador(string n, double s){
	this->nome = n;
	this->salario = s;
}

Trabalhador::~Trabalhador(){}

void Trabalhador::setNome(string n){
	this->nome = n;
}

void Trabalhador::setSalario(double s){
	this->salario = s;
}
string Trabalhador::getNome(){
	return nome;
}
double Trabalhador::getSalario(){
	return salario;
}
double Trabalhador::calculaPagamento(int h){
	return h/4.0; //Não consegui terminar a questão por falta de entendimento, peço perdão ao professor Maritan pelo ocorrido.
}
