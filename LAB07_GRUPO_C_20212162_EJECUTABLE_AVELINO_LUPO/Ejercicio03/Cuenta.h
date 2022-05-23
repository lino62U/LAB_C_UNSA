#pragma once
#include "ProductoBancario.h"
#include "string"

using namespace std;

class Cuenta:public ProductoBancario{
    public:
        Cuenta ();
        ~Cuenta ();
        void imprimir ();
};