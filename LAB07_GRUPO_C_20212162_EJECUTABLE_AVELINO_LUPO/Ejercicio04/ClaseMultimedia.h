#pragma once
#include "string"

using namespace std;

class ClaseMultimedia{
    protected:
        string genero;
        string tipo;
        ClaseMultimedia();
        ~ClaseMultimedia();
        void setGenero(string);
        void setTipo(string);
        void Imprimir();
};
