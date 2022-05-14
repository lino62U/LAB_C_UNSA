/*
  5. Implemente su propia función de concatenación de cadenas de texto especial.
  (¡no es la función ordinaria de concatenación!), recibirá como parámetro dos punteros 
  de caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer 
  puntero. La función no retorna ningún valor.

*/

#include<iostream>
#include <string.h>
 
using namespace std;
 
struct Caracter{
    string a;
    Caracter *sig =nullptr;
};
 
void concatenacion(string *a, string *b ){
    Caracter *lista;
    Caracter *nuevoCaracter1 = new Caracter();
    Caracter *nuevoCaracter2 = new Caracter();
    nuevoCaracter2->a=*b;
    nuevoCaracter1->a=*a;
   
 
    lista=nuevoCaracter2;
    nuevoCaracter2->sig=nuevoCaracter1;
    cout<<lista->a<<lista->sig->a;
   
}
int main(){
    string a, b, *aptr, *bptr;
    cout<<"String 1: ";getline(cin, a);
    cout<<"String 2: ";getline(cin, b);
    aptr=&a;
    bptr=&b;
    cout<<"Caracteres concatenados: ";
    concatenacion(aptr,bptr);
    return 0;
}
