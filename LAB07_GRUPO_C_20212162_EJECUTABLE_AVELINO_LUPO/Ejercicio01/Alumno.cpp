#include "Alumno.h"

using namespace std;

Alumno::Alumno (string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}
Alumno::~Alumno(){}
void Alumno::setEdad(int _edad){
    edad=_edad;
}

void Alumno::setNombre(string _nombre){
    nombre=_nombre;
}
int Alumno::getEdad(){return edad;}
string Alumno::getNombre(){return nombre;}