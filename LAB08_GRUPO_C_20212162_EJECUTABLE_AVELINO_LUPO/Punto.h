#pragma once
#include <iostream>
using namespace std;

class Punto{
    private:
        float x,y;
    public:
        Punto();
        Punto(float, float);
        ~Punto();
        float getX();
        float getY();
        void setXY(float, float);
};


