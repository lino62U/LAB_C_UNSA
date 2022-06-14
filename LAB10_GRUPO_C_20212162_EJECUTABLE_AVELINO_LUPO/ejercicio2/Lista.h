#pragma once
#include "iostream"
using namespace std;
 
class Lista{
    private:
        int dato;
        Lista *sig;
    public:
       
        void ingresarDato(Lista *&,int);
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
 
void Lista::print(Lista *&raiz){
    Lista *nodoFinal =raiz;      
    while (nodoFinal!=NULL){
        cout<<nodoFinal->dato<<" ";
        nodoFinal=nodoFinal->sig;
    }
}
