#include <iostream>
#include "Pila.h"
 
using namespace std;
 
int main(){
    Pila *pila = NULL;
    int n;
    for(int i=1; i<10; i++){
        pila->insertarNodo(pila,i);
    }
    cout<<"\nLista enlazada: "<<endl;
    pila->printList(pila);
    
    n=4;
    cout<<"\n\nNodo a buscar: "<<n<<endl;
    if(pila->buscarNodo(pila, n))
        cout<<"\tNodo enontrado"<<endl;
    return 0;
    system("pause");
}