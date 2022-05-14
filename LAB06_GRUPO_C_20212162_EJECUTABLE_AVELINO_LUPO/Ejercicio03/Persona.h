#pragma once
#include "iostream"
#include "string.h"

using namespace std;
class Persona{
    private:
        string fechaNacimiento, fechaActual;
        string nombre;
    public:
        Persona(string, string, string);
        ~Persona();
        int getEdad();
        string getNombre();
};

