#include<iostream>
#include "Punto.h"
using namespace std;

Punto::Punto(){x=0;y=0;}
Punto::Punto(float _x, float _y){
    x=_x;
    y=_y;
}

Punto::~Punto(){}
float Punto::getX(){return x;}
float Punto::getY(){return y;}
void Punto::setXY(float _x, float _y){
    x=_x;
    y=_y;
}