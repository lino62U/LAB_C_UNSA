#include <stdfix.h>
#include "Rectangulo.h"
#include "iostream"



Rectangulo::Rectangulo(float base, float altura){
    this->base=base;
    this->altura=altura;
}
Rectangulo::~Rectangulo(){}
float Rectangulo::getArea(){ return base*altura;}
float Rectangulo::getPerimetro(){return 2*(base+altura);}

