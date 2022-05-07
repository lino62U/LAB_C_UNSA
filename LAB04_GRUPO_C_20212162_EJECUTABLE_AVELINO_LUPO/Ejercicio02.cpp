// 2. Hacer un array unidimensional que acepte ocho números enteros. Luego le pregunte 
// al usuario que ingrese un número a buscar, implementar una función que busque ese número, 
// si lo encuentra, debe retornar un valor de verdaderos, en caso contrario, retornar falso.
#include<iostream>
using namespace std;
 
bool buscar(int n, int array[], int size){
    for (int i = 0; i < size; i++){
         if (n== array[i])
            return true;
    }
    return false;
}
 
int main(){
    const int size=8;
    int n;
    int array[size];
   
    for (int i = 0; i < size; i++){
        cout<<"N: ";cin>>array[i];
    }
 
    cout<<"\nBuscar Numero \n";
    cout<<"N: ";cin>>n;
    if (buscar(n, array, size)==true)
        cout<<"Numero encontrado";
    else
        cout<<"Numero no encontrado";
 
   return 0;
}
