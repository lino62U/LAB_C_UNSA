#include "iostream"
#include "cmath"
#include "Punto.h"
#include "Forma.h"
#include "Rectangulo.h"
#include "Cuadrado.h"

Cuadrado::Cuadrado(): Rectangulo(){
    ladoMayor=ladoMenor=0;
}
Cuadrado::~Cuadrado(){}
Cuadrado::Cuadrado(float l){
     ladoMayor=ladoMenor=l;
}
float Cuadrado::area(){
     return ladoMayor*ladoMenor;
}
void Cuadrado:: imprimir(){
    cout<<"\nTipo: "<<nombreForma<<endl;
    cout<<"\tColor: "<<color<<endl;
    cout<<"\tCoordenadas: ("<<coordenadas.getX()<<" , "<<coordenadas.getY()<<")"<<endl;
    cout<<"\tLado: "<<ladoMayor<<endl;
}
