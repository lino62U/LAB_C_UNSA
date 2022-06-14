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
    newDato->sig = NULL;
 
    if(raiz == NULL){
        raiz = newDato;
    }else{
        Lista *nodoFinal =raiz;
       
        while(nodoFinal->sig!=NULL){
            nodoFinal=nodoFinal->sig;
        }
        nodoFinal->sig=newDato;
       
    }
}
 
void Lista::print(Lista *&raiz){
    Lista *nodoFinal =raiz;      
    while (nodoFinal!=NULL){
        cout<<nodoFinal->dato<<" ";
        nodoFinal=nodoFinal->sig;
    }
}
