#pragma once
#include "iostream"
using namespace std;

class Lista{
    private:
        Lista *sig;
        int dato;
    public:
        void ingresarDato(Lista *&,int);
        void eliminarPrimerDato(Lista*&);
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

void Lista::eliminarPrimerDato(Lista *&raiz){
    Lista *aux =raiz;       
    raiz=aux->sig;
    delete aux;
    
}

void Lista::print(Lista *&raiz){
    Lista *nodoFinal =raiz;       
    while (nodoFinal!=NULL){
        cout<<nodoFinal->dato<<" ";
        nodoFinal=nodoFinal->sig;
    }
}