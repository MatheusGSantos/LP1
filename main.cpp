#include <iostream>
#include "MesaDeRestaurante.h"

using namespace std;

int main() {
	MesaDeRestaurante m = MesaDeRestaurante();
	
	cout << m.pedidos[1].getQuantidade() << endl;
	
	return 0;
}
