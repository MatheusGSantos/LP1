#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
    private:
        string nome;
    public:
        FiguraGeometrica();
        void calcularArea();
        string getNome();
        void setNome(string);

        virtual ~FiguraGeometrica();

};
class Retangulo:public FiguraGeometrica
{
    private:
        double Base;
        double Altura;
    public:
        double getBase();
        double getAltura();
        void setBase(double);
        void setAltura(double);
};
class Circulo:public FiguraGeometrica
{
    private:
        double Raio;
    public:
        double getRaio();
        void setRaio(double);
};
class Trapezio:public FiguraGeometrica
{
    private:
        double baseMaior;
        double baseMenor;
        double Altura;
    public:
        double getbaseMaior();
        double getbaseMenor();
        double getAltura();
        void setbaseMaior(double);
        void setbaseMenor(double);
        void setAltura(double);
};
class Triangulo:public FiguraGeometrica
{
        private:
        double Altura;
        double Base;
    public:
        double getAltura();
        double getBase();
        void setAltura(double);
        void setBase(double);
};
#endif // FIGURAGEOMETRICA_H
