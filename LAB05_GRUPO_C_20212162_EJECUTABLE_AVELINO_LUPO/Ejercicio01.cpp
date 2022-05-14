/*
    1. Asignar valores a dos variables enteras, intercambie estos valores almacenados usando solo punteros a enteros.
*/
#include <iostream>
#include<string.h>
 
using namespace std;
 
void change(int *a, int *b){
    int temp(*a);
    *a=*b;
    *b=temp;
}
int main(){
    int a=5;
    int b=9;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    change(&a,&b);
    cout<<"a: "<<a<<" b: "<<b<<endl;
    return 0;
 
}
