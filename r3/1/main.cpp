#include <iostream>
#include "Data.h"

using namespace std;

int main(){
	Data hoje(31,12,2018);

	cout << "Data de hoje: " << hoje.getDia()
			<< "\\" << hoje.getMes()
			<< "\\" << hoje.getAno() << endl;
			hoje.avancarDia();

    return 0;
}
