#include<iostream>
# include <string>
#include "Matriz.h"
#include "Matriz.cpp"

using namespace std;



int main(){

    Matriz matriz;
    matriz.mostrarMatriz();
    int n;
    cout<<"Buscar n: ";cin>>n;
    matriz.busqueda(n);
    return 0;
}
