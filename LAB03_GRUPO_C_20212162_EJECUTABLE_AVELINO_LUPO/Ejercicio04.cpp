// Hacer un programa que desarrolle una función, que genere en pantalla el listado de
// números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).

#include<iostream>
using namespace std;
 
bool division(int n){
    bool band=true;
    for (int i = 2; i < n; i++){
        if(n%i==0){band=false;}
    }
    return band;
}
void primos(int a){
    int i=2;
    do{
        if(division(i)==true){
            cout<<i<<" ";
        }
        i++;
    } while (i<a);
}

int main(){
    int a, b;
    cout<<"Ingrese un numero: ";cin>>a;
    cout<<"Numeros primos de 1 al "<<a<<": \n";
    primos(a);
 
   
    return 0;
}
