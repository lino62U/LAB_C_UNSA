/*
2. Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el
año leído por teclado, comprueba si es o no bisiesto.

*/
#include<iostream>
 
using namespace std;
 
void bisiesto(int a){
    if(a%4==0)
        cout<<a<<" es bisiesto"<<endl;
    else
        cout<<a<<" no es bisiesto"<<endl;
}
 
int main(){
 
    int a;
    cout<<"Ingrese anio: ";cin>>a;
    bisiesto(a);
 
    return 0;
}
