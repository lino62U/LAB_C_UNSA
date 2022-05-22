#pragma once
#include "iostream"
#include "string"
#include "Punto.h"

using namespace std;

class Forma{
    protected:
        string color;
        Punto coordenadas;
        string nombreForma;
    public:
        Forma();
        Forma(string, Punto, string);
        ~Forma();
        virtual void imprimir();
        string getColor();
        void setColor(string);
        void setCoordenadas(float, float);
        void setForma(string);
        virtual float area()=0;
};
