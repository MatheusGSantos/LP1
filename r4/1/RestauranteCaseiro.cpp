#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
	mr = new MesaDeRestaurante[7];
}


RestauranteCaseiro::~RestauranteCaseiro(){
}


void RestauranteCaseiro::adicionaAoPedido(int mesa, int num, std::string desc, int quant, double preco){
	mesas[mesa].adicionaAoPedido(num, desc, quant, preco);
}


double RestauranteCaseiro::calulaTotalRestaurante(){
	double sum = 0;
	for(int i = 0, i<7, i++){
		sum += mesas[i].calculoTotal();
	}
	return sum;
}