#include "FiguraGeometrica.h"
#include <iostream>
#include <string>

using namespace std;

FiguraGeometrica::FiguraGeometrica(){
};

FiguraGeometrica::FiguraGeometrica(string n)
{
    nome = n;
};

FiguraGeometrica::~FiguraGeometrica()
{
    //dtor
}

Retangulo::Retangulo(double b, double a)
{
    nome = "Retangulo";
    Base = b;
    Altura = a;
}

Triangulo::Triangulo(double b, double a)
{
    nome = "Triangulo";
    Base = b;
    Altura = a;
}

Trapezio::Trapezio(double B, double b, double a)
{
    nome = "Trapezio";
    baseMaior = B;
    baseMenor = b;
    Altura = a;
}
Circulo::Circulo(double r)
{
    nome = "Circulo";
    Raio = r;
}

double Retangulo::calcularArea()
{
    return b * a;
}

