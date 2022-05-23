#pragma once
#include "Cuenta.h"
#include "iostream"

using namespace std;
 
class CuentaJoven:public Cuenta{
    private:
        CuentaJoven ();
        ~CuentaJoven ();
        void imprimir ();

};