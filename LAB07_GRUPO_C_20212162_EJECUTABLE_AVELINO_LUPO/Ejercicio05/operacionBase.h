#pragma once
#include "string"

using namespace std;

class operacionBase{
    protected:
        int operador;
    public:
        operacionBase();
        ~operacionBase();
        void setOperador(int);
        int getOperador();
};