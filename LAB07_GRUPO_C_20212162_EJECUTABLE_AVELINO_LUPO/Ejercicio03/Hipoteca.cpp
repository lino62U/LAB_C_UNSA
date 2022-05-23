#include "Hipoteca.h"
#include "string"
#include "iostream"

using namespace std;

Hipoteca::~Hipoteca(){}
Hipoteca::Hipoteca(){}
Hipoteca::Hipoteca(string _nom, double _saldo, int prod){
    numProductos=prod;
    saldo=_saldo;
    cliente=_nom;
}

void Hipoteca::imprimir(){
    cout<<"\nCliente: "<<cliente<<endl;
    cout<<"\tSaldo: "<<saldo<<endl;
    cout<<"\tProductos: "<<numProductos<<endl;
}