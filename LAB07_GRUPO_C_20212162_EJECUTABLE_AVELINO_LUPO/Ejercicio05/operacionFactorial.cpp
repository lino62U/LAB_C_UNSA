#include "operacionFactorial.h"
#include "iostream"

using namespace std;

operacionFactorial::operacionFactorial(int n){
    operador=n;
}
operacionFactorial::~operacionFactorial(){}
int operacionFactorial::getOperador(){return operador;}
void operacionFactorial::setOperador(int n){ operador=n;}
int operacionFactorial::devolverFactorial(){
    int temp=1;
    for (int i = 1; i <= operador; i++){
        temp*=i;
    }
    return temp;
}