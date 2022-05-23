#pragma once
#include "Ave.h"
#include "iostream"

class Ganso: public Ave{ 
    public:
        Ganso(string);
        ~Ganso();
        void habilidad();
        void imprimir();
};