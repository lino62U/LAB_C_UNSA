#include<iostream>
#pragma once
using namespace std;

struct Dato{
    int data;
    bool estado=false;
};

class Lista{
    private:
        Dato lista[5];
    public:
        
        
        Lista();
        
        
        ~Lista();
        void Agregar(int x);
        bool verificarEspacio(bool);
        void Eliminar(int x);
        void mostrar();
};