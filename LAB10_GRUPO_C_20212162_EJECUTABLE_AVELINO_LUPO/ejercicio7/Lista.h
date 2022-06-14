#pragma once
#include "iostream"
using namespace std;

class Lista {
    private:
        int dato;
        Lista* sig;
    public:
        void ingresarDato(Lista *&,int);
        void printList(Lista*&);
        Lista* getNodoFinal(Lista*&);

        Lista* partition(Lista*&, Lista*&, Lista*&, Lista*&, bool);
        Lista* quickSortRecur(Lista*, Lista*, bool);

        void ordenAscendente(Lista*&);
        void ordenDescendente(Lista*&);
       
};
 

void Lista::ingresarDato(Lista *&raiz, int n){
    Lista *newDato = new Lista();
    newDato->dato = n;
    newDato->sig = NULL;
    if(raiz == NULL){
        raiz = newDato;
        
    }else{
        Lista *nodoFinal=raiz;
        while(nodoFinal->sig!=NULL){
            nodoFinal=nodoFinal->sig;
        }
        nodoFinal->sig=newDato;
    }
}
 

void Lista::printList(Lista*& raiz){
    Lista *aux=raiz;
    while (aux != NULL) {
        cout<< aux->dato<<" ";
        aux = aux->sig;
    }
    printf("\n");
}

Lista* Lista::getNodoFinal(Lista*& raiz){
    Lista* nodoFinal=raiz;
    if(raiz!=NULL){
        while (nodoFinal->sig != NULL)
            nodoFinal = nodoFinal->sig;        
    }

    return nodoFinal;
}

Lista* Lista::partition(Lista* &raiz, Lista* &nodoFinal, Lista*& newRaiz, Lista*& newNodoFinal, bool band){
    Lista * aux= raiz; 
    Lista *pivot = nodoFinal;
    Lista *nodoAnterior = NULL;
    Lista *tail = pivot;
    while (aux != pivot) {
        if (aux->dato < pivot->dato && band==false) {
            if (newRaiz == NULL)
                newRaiz = aux;

            nodoAnterior = aux;
            aux = aux->sig;
        }
        else if (aux->dato > pivot->dato && band==true) {
            if (newRaiz == NULL)
                newRaiz = aux;

            nodoAnterior = aux;
            aux = aux->sig;
        }
        else {
            if (nodoAnterior!=NULL)
                nodoAnterior->sig = aux->sig;
            
            Lista* tmp = aux->sig;
            aux->sig = NULL;
            tail->sig = aux;
            tail = aux;
            aux = tmp;
        }
    }
    
 
    if (newRaiz == NULL)
        newRaiz = pivot;

    newNodoFinal = tail;

    return pivot;
}
 
Lista* Lista::quickSortRecur(Lista* raiz, Lista* nodoFinal, bool band){
    
    if (!raiz || raiz == nodoFinal)
        return raiz;
 
    Lista *newRaiz = NULL, *newNodoFinal = NULL;
 
    Lista* pivot = partition(raiz, nodoFinal, newRaiz, newNodoFinal, band);
 
    if (newRaiz != pivot) {
        Lista* tmp = newRaiz;
        while (tmp->sig != pivot)
            tmp = tmp->sig;
        tmp->sig = NULL;
 
        newRaiz = quickSortRecur(newRaiz, tmp, band);
 
 
        tmp = getNodoFinal(newRaiz);
        tmp->sig = pivot;
    }

    pivot->sig = quickSortRecur(pivot->sig, newNodoFinal, band);
 
    return newRaiz;
}

void Lista::ordenAscendente(Lista*&raizRef){
    bool band = false;
    raizRef= quickSortRecur(raizRef, getNodoFinal(raizRef),band);
    return;
}


void Lista::ordenDescendente(Lista*&raizRef){
    bool band=true;
    raizRef= quickSortRecur(raizRef, getNodoFinal(raizRef), band);
    return;
}
