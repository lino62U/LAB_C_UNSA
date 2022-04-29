/*
1. Hacer un programa que sin usar la función pow(), pero por medio de una función,
calcule la potencia de un número (ambos números ingresados por teclado).
*/

#include<iostream>
 
using namespace std;
 
void potencia(int a, int b){
    int potencia;
    for (int i = 0; i < b; i++)
    {
        potencia*=a;
    }
    cout<<"Resultado: "<<potencia<<endl;
}
 
int main(){
 
    int a,b;
    cout<<"Petencia de un numero"<<endl;
    cout<<"Numero y exponente: ";cin>>a>>b;
    potencia(a,b);
 
    return 0;
}
