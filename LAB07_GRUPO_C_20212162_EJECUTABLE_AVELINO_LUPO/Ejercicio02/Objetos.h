#pragma once
#include "iostream"
#include "string"
#include "Color.h"

#include "Material.h"


using namespace std;

class Objetos: public Color, public Material{
    string nombre;
    public:
        Objetos(string ,string , string );
        ~Objetos();
        void descripcion();
};
