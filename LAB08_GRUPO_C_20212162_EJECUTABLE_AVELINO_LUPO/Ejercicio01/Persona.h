
#pragma once
#include "string"

using namespace std;

class Persona{
    protected:
        int edad;
        string nombre;
    public:
        Persona();
        ~Persona();
        void setEdad(int);
        void setNombre(string);
};