/*
  6. Utilizando punteros a funciones, implemente las funciones:
    a. void sumar (int a, int b);
    b. void restar (int a, int b);
    c. void multiplicar (int a, int b);
    d. void dividir (int a, int b);
  Cree un vector de punteros a funciones e implemente un programa que permita la
  invocación de cada función, pero a través del puntero.
*/

#include<iostream>
using namespace std;
 
float sumar (float a, float b){return  a + b;}
float restar (float a, float b){return a-b;}
float multiplicar (float a, float b){return  a*b;}
float dividir (float a, float b){return a/b;}
 
int main(){
    float a, b;
    cout<<"Ingrese A y B: ";cin>>a>>b;
    char signos[]={"+-x/"};
    float (*operaciones[4]) (float, float) = { sumar, restar, multiplicar, dividir };
 
    for(int i=0;i<4; i++)
        cout<<a<<" "<<signos[i]<<" "<<b<<" = "<<operaciones[i](a,b)<<endl;
   
    return 0;
 
}
