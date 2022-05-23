#pragma once
#include "operacionBase.h"
#include "iostream"

class operacionFactorial: public operacionBase{
    public:
        operacionFactorial(int);
        ~operacionFactorial();
        void setOperador(int);
        int getOperador();
        int devolverFactorial();
};