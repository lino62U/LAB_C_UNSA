#include "CuentaJoven.h"
#include "string"
#include "iostream"

using namespace std;

CuentaJoven::~CuentaJoven(){}
CuentaJoven::CuentaJoven(){}
void CuentaJoven::imprimir(){
    cout<<"\nCliente: "<<cliente<<endl;
    cout<<"\tSaldo: "<<saldo<<endl;
    cout<<"\tProductos: "<<numProductos<<endl;
}