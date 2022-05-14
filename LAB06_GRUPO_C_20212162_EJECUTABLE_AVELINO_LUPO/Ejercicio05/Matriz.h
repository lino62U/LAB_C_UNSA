#include<iostream>
#pragma once

using namespace std;

class Matriz{
    private:
        int arrayy[3][3];
    public:
        Matriz();
        ~Matriz();
        void mostrarMatriz();
        void busqueda(int);
};

    
