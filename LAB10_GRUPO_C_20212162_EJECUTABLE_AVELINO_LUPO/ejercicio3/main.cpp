#include <iostream>
#include "Lista.h"
 
using namespace std;
 
int main(){
    Lista *lista = NULL;
 
    for(int i=2; i<6; i++){
        lista->ingresarDato(lista,i);
    }
    cout<<"\nLista enlazada: "<<endl;
    lista->print(lista);
   
 
    // siendo 8 el nuevo nodo y (4 ,3) la posicion a ingresar
    lista->ingresarDato_entre_dosDatos(lista,8,4,3);
    cout<<"\nLista enlazada2: "<<endl;
    lista->print(lista);
 
    return 0;
    system("pause");
}
