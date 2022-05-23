#pragma once
#include "iostream"

using namespace std;

class Ave{
    protected:
        string especie;
        string nombreCientifico;
    public:
        Ave();
        Ave(string, string);
        ~Ave();
        virtual void imprimir()=0;
};