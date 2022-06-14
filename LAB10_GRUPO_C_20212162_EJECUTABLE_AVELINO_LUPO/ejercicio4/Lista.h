#pragma once
#include "iostream"
using namespace std;

class Lista{
    private:
        Lista *sig;
        int dato;
    public:
        void ingresarDato(Lista *&,int);
        void eliminarUltimoDato(Lista*&);
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

void Lista::eliminarUltimoDato(Lista *&raiz){
    Lista *nodoFinal =raiz;       
    while (nodoFinal->sig->sig!=NULL){
        nodoFinal=nodoFinal->sig;
    }
    Lista *aux=nodoFinal->sig;
    nodoFinal->sig=NULL;
    delete aux;
}

void Lista::print(Lista *&raiz){
    Lista *nodoFinal =raiz;       
    while (nodoFinal!=NULL){
        cout<<nodoFinal->dato<<" ";
        nodoFinal=nodoFinal->sig;
    }
}