#pragma once
#include "ProductoBancario.h"

using namespace std;

class Prestamo: public ProductoBancario{
    protected:
        Prestamo();
        ~Prestamo();
        void imprimir();
};

