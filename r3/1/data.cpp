#include "data.h"
#include <iostream>

using namespace std;

data::data()
{
    dia = 1;
    mes = 1;
    ano = 1970;
}
data::data(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
    	if (verificarData() == false){
		cout << "Data invalida" << endl ;
		dia = 1;
		mes = 1;
		ano = 1970;
	}
}
data::~data()
{}

int data::getDia()
{
    return dia;
}
int data::getMes()
{
    return mes;
}
int data::getAno()
{
    return ano;
}

void data::setDia(int d)
{
    dia = d;
}
void data::setMes(int m)
{
    mes = m;
}
void data::setAno(int a)
{
    ano = a;
}

void avancarDia(int d,int m,int a)
{
    d++;
    if(d > 31){
        d = 1;
        m++;
    }
    if(m > 12){
        m = 1;
        a++;
    }
    if(d > 31 && m == 12)
        a++;
}
bool data::verificarData(){
	if ((dia <= 0) || (dia > 31))
		return false;
	if ((mes <= 0) || (mes > 12))
		return false;
	if ((ano < 0) || (ano > 2018))
		return false;
}

