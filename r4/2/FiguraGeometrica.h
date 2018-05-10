#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        FiguraGeometrica(string);
        string nome;
        double calcularArea();
        virtual ~FiguraGeometrica();

};
class Retangulo:public FiguraGeometrica
{
     public:
        double Altura;
        double Base;
        Retangulo(double, double);
};
class Circulo:public FiguraGeometrica
{
   public:
        double Raio;
        Circulo(double);
};
class Trapezio:public FiguraGeometrica
{
   public:
        double baseMaior;
        double baseMenor;
        double Altura;
        Trapezio(double, double, double);
};
class Triangulo:public FiguraGeometrica
{
    public:
        double Altura;
        double Base;
        Triangulo(double, double);
};

#endif
