#pragma once
#include "Ave.h"
#include "iostream"

class Pato: public Ave{

    public:
        Pato(string);
        ~Pato();
        void habilidad();
        void imprimir();
};