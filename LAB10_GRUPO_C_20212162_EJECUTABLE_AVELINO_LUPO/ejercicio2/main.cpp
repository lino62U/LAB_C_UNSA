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
   
    return 0;
    system("pause");
}
