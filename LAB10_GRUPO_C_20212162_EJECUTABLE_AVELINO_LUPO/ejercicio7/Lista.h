#pragma once
#include "iostream"
using namespace std;

// C++ program for Quick Sort on Singly Linled List
#include <cstdio>
#include <iostream>
using namespace std;
 
/* a node of the singly linked list */
class Lista {
    private:
        int dato;
        Lista* sig;
    public:
        void ingresarDato(Lista *&,int);
        void printList(Lista*&);
        Lista* getNodoFinal(Lista*&);
        void quickSort(Lista*&);

        Lista* partition(Lista*&, Lista*&, Lista*&, Lista*&);
        Lista* quickSortRecur(Lista*, Lista*);
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
 
// Retornar ultimo elemento
Lista* Lista::getNodoFinal(Lista*& raiz){
    Lista* nodoFinal=raiz;
    if(raiz!=NULL){
        while (nodoFinal->sig != NULL)
            nodoFinal = nodoFinal->sig;        
    }

    return nodoFinal;
}
 
// Particionar lista, con el ultimo elemento como pivote
Lista* Lista::partition(Lista* &raiz, Lista* &nodoFinal, Lista*& newRaiz, Lista*& newNodoFinal){
    Lista * aux= raiz;  // aux es el iterador
    Lista *pivot = nodoFinal;
    Lista *nodoAnterior = NULL;
    Lista *tail = pivot;
 
    // During partition, both the raiz and end of the list
    // might change which is updated in the newRaiz and
    // newNodoFinal variables
    while (aux != pivot) {
        if (aux->dato < pivot->dato) {
            // First node that has a value less than the
            // pivot - becomes the new raiz
            if (newRaiz == NULL)
                newRaiz = aux;
 
            nodoAnterior = aux;
            aux = aux->sig;
        }
    // If cur node is greater than pivot Move aux node to sig of tail, and change tail
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
 
    // If the pivot data is the smallest element in the
    // current list, pivot becomes the raiz
    if (newRaiz == NULL)
        newRaiz = pivot;
 
    // Update newNodoFinal to the current last node
    newNodoFinal = tail;
 
    // Return the pivot node
    return pivot;
}
 
// here the sorting happens exclusive of the end node
Lista* Lista::quickSortRecur(Lista* raiz, Lista* nodoFinal){
    // base condition
    if (!raiz || raiz == nodoFinal)
        return raiz;
 
    Lista *newRaiz = NULL, *newNodoFinal = NULL;
 
    // Partition the list, newRaiz and newNodoFinal will be
    // updated by the partition function
    Lista* pivot = partition(raiz, nodoFinal, newRaiz, newNodoFinal);
 
    // If pivot is the smallest element - no need to recur
    // for the left part.
    if (newRaiz != pivot) {
        // Set the node before the pivot node as NULL
        Lista* tmp = newRaiz;
        while (tmp->sig != pivot)
            tmp = tmp->sig;
        tmp->sig = NULL;
 
        // Recur for the list before pivot
        newRaiz = quickSortRecur(newRaiz, tmp);
 
        // Change sig of last node of the left half to
        // pivot
        tmp = getNodoFinal(newRaiz);
        tmp->sig = pivot;
    }
 
    // Recur for the list after the pivot element
    pivot->sig = quickSortRecur(pivot->sig, newNodoFinal);
 
    return newRaiz;
}
 
// The main function for quick sort. This is a wrapper over
// recursive function quickSortRecur()
void Lista::quickSort(Lista*&raizRef){
    raizRef= quickSortRecur(raizRef, getNodoFinal(raizRef));
    return;
}
 
