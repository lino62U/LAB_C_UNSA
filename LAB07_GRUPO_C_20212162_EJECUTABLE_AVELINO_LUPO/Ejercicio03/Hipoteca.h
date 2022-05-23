#pragma once
#include "Prestamo.h"
#include "string"

class Hipoteca:public Prestamo{
    public:
        Hipoteca();
        Hipoteca(string, double, int);
        ~Hipoteca();
        void imprimir();
};