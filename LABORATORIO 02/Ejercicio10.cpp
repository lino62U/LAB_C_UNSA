/*
10. Escribir un programa que pida al usuario una palabra y luego muestre por
pantalla una a una las letras de la palabra introducida empezando por la última.
*/
#include <iostream>
#include<string.h>
using namespace std;

int main(){
    string palabra;
    cout<<"Palabra: ";getline(cin, palabra);
    
    for (int i = palabra.size()-1; i >=0; i--){
        cout<<palabra.substr(i,1)<<endl;
    }

    return 0;
}
