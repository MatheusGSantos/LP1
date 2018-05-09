#ifndef RESTAURANTE_CASEIRO_H
#define RESTAURANTE_CASEIRO_H

#include "MesaDeRestaurante.h"
#include <string>

class RestauranteCaseiro
{
public:
	RestauranteCaseiro();
	~RestauranteCaseiro();
	void adicionaAoPedido(int, int, std::string, double);
	double calulaTotalRestaurante();

	MesaDeRestaurante *mesas;
};


#endif