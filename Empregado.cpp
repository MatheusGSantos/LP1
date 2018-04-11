#include "Empregado.h"
#include <iostream>

Empregado::Empregado(){
	nome = "";
	sobrenome = "";
	salario = 0;
}

Empregado::Empregado(std::string n, std::string sn, double s){
	nome = n;
	sobrenome = sn;
	if(salario < 0){
		std::cout<<"Salario Negativo, valor mudado para 0.\n";
		salario = 0;
	}else{
		salario = s;
	}
}

std::string Empregado::getNome(){
	return nome;
}
std::string Empregado::getSobreNome(){
	return sobrenome;
}
double Empregado::getSalario(){
	return salario;
}
void Empregado::setNome(std::string n){
	nome = n;
}
void Empregado::setSobreNome(std::string sn){
	sobrenome = sn;
}
void Empregado::setSalario(double s){
	salario = s;
}

Empregado::~Empregado(){
	//vazio
}
