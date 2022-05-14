
#pragma once
#include <iostream>

using namespace std;

class Rectangulo{
    private:
        float base, altura;
    public:
        Rectangulo(float, float);
        ~Rectangulo();
        float getPerimetro();
        float getArea();
};
