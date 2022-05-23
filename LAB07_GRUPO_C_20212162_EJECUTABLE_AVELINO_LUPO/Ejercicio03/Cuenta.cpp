#include "Cuenta.h"
#include "string"
#include "iostream"

using namespace std;

Cuenta::Cuenta(){}
Cuenta::~Cuenta(){}
void Cuenta::imprimir(){
    cout<<"\nCliente: "<<cliente<<endl;
    cout<<"\tSaldo: "<<saldo<<endl;
    cout<<"\tProductos: "<<numProductos<<endl;
}
