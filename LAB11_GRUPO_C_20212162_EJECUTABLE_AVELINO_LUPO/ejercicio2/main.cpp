#include <iostream>
#include "Pila.h"
 
using namespace std;
 
int main(){
    Pila *pila = NULL;
 
    for(int i=1; i<10; i++){
        pila->insertarNodo(pila,i);
    }
    cout<<"\nPila: "<<endl;
    pila->printList(pila);
    
    pila->eliminarDato(pila);
    cout<<"\nPila eliminar dato: "<<endl;
    pila->printList(pila);
   
    return 0;
    system("pause");
}