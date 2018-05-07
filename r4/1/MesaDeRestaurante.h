#ifndef MESA_DE_RESTAURANTE_H
#define MESA_DE_RESTAURANTE_H

#include <string>
#include "Pedido.h"

class MesaDeRestaurante
{
public:
	MesaDeRestaurante();
	virtual ~MesaDeRestaurante();

	void adicionaAoPedido(int, std::string, int, double);
	void zeraPedidos();
	double calculoTotal();
	Pedido *pedidos;

};

#endif
