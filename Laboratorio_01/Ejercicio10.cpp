#include <iostream> 
#include <string.h>
using namespace std;

/*
10. Escribir un programa que almacene la cadena de caracteres contraseña en una
variable, pregunte al usuario por la contraseña hasta que introduzca la contraseña
correcta.

*/
int main(){
    bool band=false;
    string contra, verificar;
    cout<<"Ingrese una contrasena: ";getline(cin,contra);
    while (band!=true){
        cout<<"\nIngrese la contrasena anterior: ";getline(cin, verificar);
        if(verificar==contra){
            cout<<"Contrasenia correcta"<<endl;
            band=true;
        }
        else
            cout<<"Contrasenia incorrecta"<<endl;
    }
    
    return 0;
}
