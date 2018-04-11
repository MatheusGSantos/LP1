#ifndef DATA_H
#define DATA_H


class data
{
    private:
        int dia;
        int mes;
        int ano;

    public:
        data();
        data(int,int,int);
        int getDia();
        int getMes();
        int getAno();
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        void avancarDia(int,int,int);
        bool verificarData();
        virtual ~data();


};

#endif // DATA_H
