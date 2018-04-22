#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice fatura(1,3,"unpaid",45.00);

    cout << "Fatura:" <<endl << fatura.getQuant() << endl
    << fatura.getNum() << endl
    << fatura.getDesc() << endl
    << fatura.getPreco() << endl;

    fatura.getInvoiceAmount();

    return 0;
}
