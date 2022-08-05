#include "iostream"
#include "Calculator.h"
using namespace std;


template <typename T>
void printOperaciones(Calculator<T> *f){
   cout<<"\nOperaciones Basicas: "<<f->getA()<<" y "<<f->getB()<<"\n"; 
   cout<<"Suma: \t\t\t"<<f->getSuma()<<endl;
   cout<<"Resta: \t\t\t"<<f->getResta()<<endl;
   cout<<"Multiplicacion: \t"<<f->getMultiplicacion()<<endl;
   cout<<"Division: \t\t"<<f->getDivision()<<endl; 
}

int main(){

    Calculator<float> calculadora(4.6,3.1);
    Calculator<int> calculadora2(4.6,3.1);
    Calculator<double> calculadora3(4.6,3.1);
    cout<<"Operaciones con float: "<<endl;
    printOperaciones(&calculadora);
    cout<<"\nOperaciones con int: "<<endl;
    printOperaciones(&calculadora2);
    cout<<"\nOperaciones con double: "<<endl;
    printOperaciones(&calculadora3);
    

    return 0;

}