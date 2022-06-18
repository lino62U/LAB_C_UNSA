#pragma once
#include "iostream"
using namespace std;
class Pila{
    private:
        int dato;
        Pila *sig;
    
    public:
        void insertarNodo(Pila *&, int);
        void printList(Pila *&);
        void eliminarDato(Pila *&);
    
};

void Pila::insertarNodo(Pila *& raiz, int n){
    Pila *newNodo = new Pila();
    newNodo->dato=n;
    newNodo->sig=NULL;
    
    if(raiz==NULL){
        raiz=newNodo;
    }else{
        Pila *nodoInicio= raiz;
        newNodo->sig=nodoInicio;
        raiz=newNodo;
        
    }

}

void Pila::eliminarDato(Pila *&raiz){
    Pila *nodoInicio =raiz;
    raiz=raiz->sig;
    
    delete nodoInicio;

}

void Pila::printList(Pila *&raiz){
   Pila *nodoFinal =raiz;      
    while (nodoFinal!=NULL){
        cout<<nodoFinal->dato<<" ";
        nodoFinal=nodoFinal->sig;
    } 
}