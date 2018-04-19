#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

int main()
{
	ControleDeGastos controle_1;

	controle_1.setDespesas(651.4, 1543.9, "comida_burn", "lazer");

	cout << "A soma total dos gastos eh: "<< controle_1.calculaTotalDeDespesas();

	if(controle_1.existeGastoDoTipo("comida_burn")){//Supondo que voce procura o tipo de gasto comida, ele verifica se ja existe esse tipo de gasto e retorna true, se verdadeiro;
	cout << "existe gasto do tipo comida_burn" << endl;
	}

	return 0;
}
