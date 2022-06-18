#pragma once
#include "iostream"
using namespace std;

class Pila{
    private:
        int dato;
        Pila *sig;
        char name;
    public:
        Pila(){}
        Pila(char _name):name(_name),dato(0) {}
        void insertarNodo(Pila *&, int);
        void printList(Pila *&);
        int getNodo(Pila*&);
        char getName(Pila *&);
        void eliminarNodo(Pila *&);
        
    
};

char Pila::getName(Pila *&raiz){
    return raiz->name;
}
void Pila::insertarNodo(Pila *& raiz, int n){
    Pila *newNodo = new Pila(raiz->name);
    newNodo->dato=n;
    newNodo->sig=NULL; 
    
    Pila *nodoInicio = raiz;
    newNodo->sig=nodoInicio;
    raiz=newNodo;
    

}
int Pila::getNodo(Pila *&raiz){
    return raiz->dato;
}
void Pila::eliminarNodo(Pila *&raiz){
    Pila *nodoInicio =raiz;
    raiz=raiz->sig;
    
    delete nodoInicio;
}
    

void Pila::printList(Pila *&raiz){
    Pila *nodoFinal =raiz;      
    if(raiz->dato== 0){
        cout<<"Vacio"<<endl;
    }else{
        cout<<endl;
        while (nodoFinal->sig!=NULL){
            cout<<"\t\t"<<nodoFinal->dato<<endl;
            nodoFinal=nodoFinal->sig;
        }
    }
    
    delete nodoFinal->sig;

}
