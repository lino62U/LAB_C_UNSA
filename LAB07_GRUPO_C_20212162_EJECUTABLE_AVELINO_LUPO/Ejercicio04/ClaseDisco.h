#pragma once
#include "string"
#include "ClaseMultimedia.h"
#include "iostream"

using namespace std;

class ClaseDisco: public ClaseMultimedia{
    private:
        string autor;
    public:
        ClaseDisco(string, string);
        ~ClaseDisco();
        void Imprimir();
};