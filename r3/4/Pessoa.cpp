#include "Pessoa.h"
#include <iostream>

Pessoa::Pessoa(std::string n){
	nome = n;
	telefone = "n/a";
	idade = 0;
}

Pessoa::Pessoa(std::string n, int i, std::string t){
	nome = n;
	telefone = t;
	idade = i;
}

std::string Pessoa::getNome(){
	return nome;
}
std::string Pessoa::getTelefone(){
	return telefone;
}
int Pessoa::getIdade(){
	return idade;
}
void Pessoa::setNome(std::string n){
	nome = n;
}
void Pessoa::setTelefone(std::string t){
	telefone = t;
}
void Pessoa::setIdade(int i){
	idade = i;
}

Pessoa::~Pessoa(){
	//vazio
}
