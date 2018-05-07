#include "MesaDeRestaurante.h"
#include <iostream>

MesaDeRestaurante::MesaDeRestaurante(){
	pedidos = new Pedido[40];
}

MesaDeRestaurante::~MesaDeRestaurante(){
}

void MesaDeRestaurante::adicionaAoPedido(int n, std::string d, int q, double p) {
	int index = 0;
	for (int i = 0; i < 40; i++)
	{
		if (pedidos[i].getQuantidade() == 0) {
			index = i;
			break;
		}
	}
	pedidos[index].setDescricao(d);
	pedidos[index].setNumero(n);
	pedidos[index].setPreco(p);
	pedidos[index].setQuantidade(q);
}
void MesaDeRestaurante::zeraPedidos() {
	for (int i = 0; i < 40; i++)
	{
		pedidos[i].setQuantidade(0);
	}
}
double MesaDeRestaurante::calculoTotal() {
	double soma = 0.0;
	for (int i = 0; i < 40; i++)
	{
		if (pedidos[i].getQuantidade() == 0) {
			break;
		}
		soma += pedidos[i].getQuantidade()*pedidos[i].getPreco();
	}
	return soma;
}
