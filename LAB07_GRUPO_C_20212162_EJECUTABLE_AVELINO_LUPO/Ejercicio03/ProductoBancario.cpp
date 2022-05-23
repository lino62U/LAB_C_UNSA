#include "ProductoBancario.h"
#include "iostream"
#include "string"

using namespace std;

ProductoBancario::ProductoBancario(){
    numProductos=0;
    saldo=0;
    cliente=".";
}
ProductoBancario::~ProductoBancario(){}
ProductoBancario::ProductoBancario(string a, double b, int c){
    numProductos=c;
    saldo=b;
    cliente=a;
}
void ProductoBancario::imprimir(){
    cout<<"Clase ProductoBancario"<<endl;
}