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
    
    lista->eliminarPrimerDato(lista);
    cout<<"\n\nEliminar primer elemento"<<endl;
    cout<<"Nueva Lista enlazada: "<<endl;
    lista->print(lista);

    return 0;
    system("pause");
}