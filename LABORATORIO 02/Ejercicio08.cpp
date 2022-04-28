/*
8. Escribir un programa que genere la tabla de multiplicar de un número
introducido por el teclado
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    
    cout<<"N: ";cin>>num;
    for(int i=0;i<=12;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }

    return 0;
}
