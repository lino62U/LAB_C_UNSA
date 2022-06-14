#pragma once
#include "iostream"
using namespace std;
 
class Lista{
    private:
        Lista *sig;
        int dato;
    public:
        void ingresarDato(Lista *&,int);
        void ingresarDato_entre_dosDatos(Lista *&,int, int, int);
        void print(Lista *&);
};
 
 
void Lista::ingresarDato(Lista *&raiz, int n){
    Lista *newDato = new Lista();
    newDato->dato = n;
 
    if(raiz == NULL){
        raiz = newDato;
        raiz->sig=NULL;
    }else{
        Lista *aux = raiz;  
        newDato->sig=aux;
        raiz=newDato;
    }
}
void Lista::ingresarDato_entre_dosDatos(Lista *&raiz,int newNodo, int nodo1, int nodo2){
    Lista *nodoFinal=raiz;
    bool band=true;
    while (nodoFinal->sig!=NULL){
        if(nodoFinal->dato==nodo1 && nodoFinal->sig->dato==nodo2){
            Lista *newDato = new Lista();
            newDato->dato = newNodo;
            newDato->sig=nodoFinal->sig;
            band=false;
            nodoFinal->sig=newDato;
            break;
        }
        nodoFinal=nodoFinal->sig;
    }
    if(band==true){
        cout<<"\nNo se encontraron nodos ingresados en la lista enlazada"<<endl;
    }
 
}
void Lista::print(Lista *&raiz){
    Lista *nodoFinal =raiz;      
    while (nodoFinal!=NULL){
        cout<<nodoFinal->dato<<" ";
        nodoFinal=nodoFinal->sig;
    }
}
