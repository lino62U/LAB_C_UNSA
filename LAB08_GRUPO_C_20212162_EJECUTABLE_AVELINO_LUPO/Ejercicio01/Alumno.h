#pragma once
#include "Persona.h"

class Alumno: public Persona{
    public:
        Alumno(string, int);
        ~Alumno();
        void setEdad(int);
        void setNombre(string);
        int getEdad();
        string getNombre();

};
