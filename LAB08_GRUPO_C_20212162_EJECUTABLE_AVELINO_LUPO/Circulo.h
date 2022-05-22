#pragma once
#include "Punto.h"
#include "Forma.h"
#include "Elipse.h"                                                                                                                                                       

class Circulo: public Elipse{
     public:
          Circulo();
          ~Circulo();
          Circulo(float);
          void imprimir();
          float area();
};