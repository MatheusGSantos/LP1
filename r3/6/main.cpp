#include <iostream>
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    ControleDePagamentos p1 = ControleDePagamentos();

    p1.setPagamentos(350, 450, "Joao", "Maria");

    cout << "Total de pagamentos é: " << p1.calculaTotalDePagamentos();

    return 0;
}
