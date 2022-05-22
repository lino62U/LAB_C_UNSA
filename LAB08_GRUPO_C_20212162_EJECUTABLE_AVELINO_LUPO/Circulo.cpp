#include "iostream"
#include "cmath"
#include "Punto.h"
#include "Forma.h"
#include "Rectangulo.h"
#include "Circulo.h"

Circulo::Circulo(){
     radioMayor=radioMenor=0;
}
Circulo::~Circulo(){}
Circulo::Circulo(float r){
     radioMayor=radioMenor=r;
}

float Circulo::area(){
     return M_PI*radioMenor*radioMenor;
}
void Circulo:: imprimir(){
    cout<<"\nTipo: "<<nombreForma<<endl;
    cout<<"\tColor: "<<color<<endl;
    cout<<"\tCoordenadas: ("<<coordenadas.getX()<<" , "<<coordenadas.getY()<<")"<<endl;
    cout<<"\tRadio: "<<radioMayor<<endl;
}
