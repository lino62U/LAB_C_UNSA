#include "Forma.h"
#include "iostream"
#include "Punto.h"

using namespace std;

Forma::Forma(){}

Forma::Forma(string _color, Punto _coordenas, string _nombreForma){
    color=_color;
    coordenadas.setXY(_coordenas.getX(),_coordenas.getY());
    nombreForma = _nombreForma;
}
Forma::~Forma(){}

string Forma::getColor(){
    return color;
}
void Forma::setColor(string a){
    color=a;
}
void Forma::setCoordenadas(float x, float y){
    coordenadas.setXY(x,y);
}
void Forma::setForma(string form){
    nombreForma=form;
}

void Forma::imprimir(){cout<<"CLASE BASE"<<endl;}
