#pragma once
#include "Punto.h"
#include "Forma.h"

class Elipse: public Forma{
     protected:
          float radioMayor;
          float radioMenor;
     public:
          Elipse();
          Elipse(float,float);
          ~Elipse();
          void imprimir();
          virtual float area();
};