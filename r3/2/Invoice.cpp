#include "Invoice.h"
#include <iostream>

using namespace std;

Invoice::Invoice()
{
    quant = 0;
    num = 0;
    desc = "nenhuma";
    preco = 0.0;
}
Invoice::Invoice(int q,int n, string d,double p)
{
    quant = q;
    num = n;
    desc = d;
    preco = p;
}

Invoice::~Invoice()
{
    //dtor
}

int Invoice::getQuant()
{
    return quant;
}
int Invoice::getNum()
{
    return num;
}
string Invoice::getDesc()
{
    return desc;
}
double Invoice::getPreco()
{
    return preco;
}
void Invoice::setQuant(int q)
{
    quant = q;
}
void Invoice::setNum(int n)
{
    num = n;
}
void Invoice::setDesc(string d)
{
    desc = d;
}
void Invoice::setPreco(double p)
{
    preco = p;
}
void Invoice::getInvoiceAmount()
{
    double fatura;

    if(quant < 0){
        quant = 0;
        fatura = preco * quant;
        cout << "valor da fatura:"<< fatura << endl;

    }else if(preco < 0){
        preco = 0.0;
        fatura = preco * quant;
        cout << "valor da fatura:"<< fatura << endl;
    }else{
        fatura = preco * quant;
        cout << "valor da fatura:"<< fatura << endl;

    }



}
