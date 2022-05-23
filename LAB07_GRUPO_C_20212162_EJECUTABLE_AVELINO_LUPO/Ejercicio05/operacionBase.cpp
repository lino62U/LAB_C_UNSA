#include "operacionBase.h"
#include "iostream"

operacionBase::operacionBase(){}
operacionBase::~operacionBase(){}
void operacionBase::setOperador(int n){
    operador=n;
}
int operacionBase::getOperador(){
    return operador;
}