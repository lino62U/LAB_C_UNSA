#include "Prestamo.h"
#include "iostream"

using namespace std;

Prestamo::~Prestamo(){}
Prestamo::Prestamo(){}
void Prestamo::imprimir(){
    cout<<"\nCliente: "<<cliente<<endl;
    cout<<"\tSaldo: "<<saldo<<endl;
    cout<<"\tProductos: "<<numProductos<<endl;
}