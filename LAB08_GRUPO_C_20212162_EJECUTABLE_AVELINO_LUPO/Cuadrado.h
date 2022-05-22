#pragma once
#include "Punto.h"
#include "Forma.h"
#include "Rectangulo.h"

class Cuadrado: public Rectangulo{
     public:
          Cuadrado();
          ~Cuadrado();
          Cuadrado(float);
          void imprimir();
          float area();
          
};