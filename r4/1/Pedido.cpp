#include "Pedido.h"

Pedido::Pedido(){
	numero = 0;
	descricao = "";
	quantidade = 0;
	preco = 0.0;
}
Pedido::Pedido(int num, std::string desc, int quant, double prec){
	numero = num;
	descricao = desc;
	quantidade = quant;
	preco = prec;
}
Pedido::~Pedido(){
}

int Pedido::getNumero(){
	return numero;
}

std::string Pedido::getDescricao(){
	return descricao;
}

int Pedido::getQuantidade(){
	return quantidade;
}

double Pedido::getPreco(){
	return preco;
}

void Pedido::setNumero(int num){
	numero = num;
}

void Pedido::setDescricao(std::string desc){
	descricao = desc;
}

void Pedido::setQuantidade(int quant){
	quantidade = quant;
}

void Pedido::setPreco(double prec){
	preco = prec;
}
