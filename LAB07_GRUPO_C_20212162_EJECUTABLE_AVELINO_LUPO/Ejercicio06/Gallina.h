#pragma once
#include "Ave.h"
#include "iostream"

class Gallina: public Ave{

    public:
        Gallina(string);
        ~Gallina();
        void habilidad();
        void imprimir();
};