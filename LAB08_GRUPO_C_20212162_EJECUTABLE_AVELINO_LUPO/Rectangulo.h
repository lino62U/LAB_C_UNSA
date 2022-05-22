#pragma once
#include "Punto.h"
#include "Forma.h"


class Rectangulo: public Forma{
    protected:
        float ladoMayor;
        float ladoMenor;
    public:
        Rectangulo();
        Rectangulo(float, float);
        ~Rectangulo();
        void imprimir();
        virtual float area();
        float perimetro();
        void changeSize(float);

};
