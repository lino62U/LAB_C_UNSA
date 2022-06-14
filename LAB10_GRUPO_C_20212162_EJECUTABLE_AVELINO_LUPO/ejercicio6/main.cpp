#include <iostream>
#include "Lista.h"

using namespace std;

int main(){
    Lista *lista = NULL;
    int n;
    for(int i=2; i<6; i++){
        lista->ingresarDato(lista,i);
    }
    cout<<"\nLista enlazada: "<<endl;
    lista->print(lista);
    
    n=8;

    lista->eliminarDato(lista, n);
    cout<<"\n\nEliminar elemento "<<n<<endl;
    cout<<"Nueva Lista enlazada: "<<endl;
    lista->print(lista);

    return 0;
    system("pause");
}