#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice
{
    private:
        int quant;
        int num;
        string desc;
        double preco;
    public:
        Invoice();
        Invoice(int,int,string,double);
        virtual ~Invoice();
        int getQuant();
        int getNum();
        string getDesc();
        double getPreco();
        void setQuant(int);
        void setNum(int);
        void setDesc(string);
        void setPreco(double);
        void getInvoiceAmount();

};

#endif // INVOICE_H
