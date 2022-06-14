#pragma once
#include "iostream"
using namespace std;

class Lista{
    private:
        Lista *sig;
        int dato;
    public:
        void ingresarDato(Lista *&,int);
        void eliminarDato(Lista *&,int);
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

void Lista::eliminarDato(Lista *&raiz, int n){
    Lista *nodoFinal=raiz;
    Lista *nodoAnterior;
    bool band=true;
    if(nodoFinal->dato==n){      
        raiz=nodoFinal->sig;
        delete nodoFinal;
        band=false;
    }else{
        while (nodoFinal!=NULL){
            if(nodoFinal->dato==n){
                if(nodoFinal->sig!=NULL){
                    nodoAnterior->sig = nodoFinal->sig;
                    delete nodoFinal;
                    band=false; 
                    break;
                }
                else{
                    nodoAnterior->sig=NULL;
                    band=false; 
                    delete nodoFinal;
                }
            }
            nodoAnterior=nodoFinal;
            nodoFinal=nodoFinal->sig;
        }
    }
    if(band==true)
        cout<<"\nDato a eliminar no encontrado en la lista enlazada"<<endl;
}

void Lista::print(Lista *&raiz){
    Lista *nodoFinal =raiz;       
    while (nodoFinal!=NULL){
        cout<<nodoFinal->dato<<" ";
        nodoFinal=nodoFinal->sig;
    }
}
