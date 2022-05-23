#pragma once
#include "string.h"
#include "iostream"

using namespace std;

class ProductoBancario{
    protected:
        string cliente;
        double saldo;
        int numProductos;
    public:
        ProductoBancario();
        ProductoBancario(string, double, int);
        ~ProductoBancario();
        void imprimir();
};