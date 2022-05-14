#include <stdfix.h>
#include "Persona.h"

using namespace std;

void reparticion(string &fecha, int &m, int &y){
     m=stoi(fecha.substr(3,2));
     y=stoi(fecha.substr(6,4));
}

Persona::Persona(string _nombre, string _fechaNacimiento, string _fechaActual){
    nombre=_nombre;
    fechaNacimiento=_fechaNacimiento;
    fechaActual=_fechaActual;
}
Persona::~Persona(){}

int Persona::getEdad(){
    int anioActual,mesActual;
    int anioNaci,mesNaci;
    reparticion(fechaActual,mesActual,anioActual);
    reparticion(fechaNacimiento,mesNaci,anioNaci);
    if(mesActual<mesNaci)
        return anioActual-anioNaci-1;
    else
        return anioActual-anioNaci;
}
string Persona::getNombre(){return nombre;}