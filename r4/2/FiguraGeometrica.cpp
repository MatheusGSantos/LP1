#include "FiguraGeometrica.h"

using namespace std;

FiguraGeometrica::FiguraGeometrica(){
};

FiguraGeometrica::FiguraGeometrica(string n)
{
    nome = n;
};

string FiguraGeometrica::getNome()
{
    return nome;
}

void FiguraGeometrica::setNome(string n)
{
    nome = n;
}

FiguraGeometrica::~FiguraGeometrica()
{
    //dtor
}

FiguraGeometrica::FiguraGeometrica(string n):Retangulo(double b, double a)
{
    base = b;
    altura = a;
}

