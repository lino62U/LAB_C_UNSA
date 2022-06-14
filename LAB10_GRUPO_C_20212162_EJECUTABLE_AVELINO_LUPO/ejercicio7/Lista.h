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
        int data;
        Lista* next;
    public:
        void ingresarDato(Lista *&,int);
        void printList(Lista*&);

        Lista* getTail(Lista*&);
        Lista* partition(Lista* head, Lista* end, Lista** newHead, Lista** newEnd);
        Lista* quickSortRecur(Lista* head, Lista* end);
        void quickSort(Lista** headRef);
};
 

void Lista::ingresarDato(Lista *&raiz, int n){
    Lista *newDato = new Lista();
    newDato->data = n;
    newDato->next = NULL;
    if(raiz == NULL){
        raiz = newDato;
        
    }else{
        Lista *nodoFinal=raiz;
        while(nodoFinal->next!=NULL){
            nodoFinal=nodoFinal->next;
        }
        nodoFinal->next=newDato;
    }
}
 

void Lista::printList(Lista*& raiz){
    Lista *aux=raiz;
    while (aux != NULL) {
        cout<< aux->data<<" ";
        aux = aux->next;
    }
    printf("\n");
}
 
// Retornar ultimo elemento
Lista* Lista::getTail(Lista*& raiz){
    Lista* nodoFinal=raiz;
    if(raiz!=NULL){
        while (nodoFinal->next != NULL)
            nodoFinal = nodoFinal->next;        
    }

    return nodoFinal;
}
 
// Particionar lista, con el ultimo elemento como pivote
Lista* Lista::partition(Lista* head, Lista* end, Lista** newHead, Lista** newEnd){
    Lista* pivot = end;
    Lista *prev = NULL, *cur = head, *tail = pivot;
 
    // During partition, both the head and end of the list
    // might change which is updated in the newHead and
    // newEnd variables
    while (cur != pivot) {
        if (cur->data < pivot->data) {
            // First node that has a value less than the
            // pivot - becomes the new head
            if ((*newHead) == NULL)
                (*newHead) = cur;
 
            prev = cur;
            cur = cur->next;
        }
        else // If cur node is greater than pivot
        {
            // Move cur node to next of tail, and change
            // tail
            if (prev)
                prev->next = cur->next;
            Lista* tmp = cur->next;
            cur->next = NULL;
            tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }
 
    // If the pivot data is the smallest element in the
    // current list, pivot becomes the head
    if ((*newHead) == NULL)
        (*newHead) = pivot;
 
    // Update newEnd to the current last node
    (*newEnd) = tail;
 
    // Return the pivot node
    return pivot;
}
 
// here the sorting happens exclusive of the end node
Lista* Lista::quickSortRecur(Lista* head, Lista* end){
    // base condition
    if (!head || head == end)
        return head;
 
    Lista *newHead = NULL, *newEnd = NULL;
 
    // Partition the list, newHead and newEnd will be
    // updated by the partition function
    Lista* pivot = partition(head, end, &newHead, &newEnd);
 
    // If pivot is the smallest element - no need to recur
    // for the left part.
    if (newHead != pivot) {
        // Set the node before the pivot node as NULL
        Lista* tmp = newHead;
        while (tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = NULL;
 
        // Recur for the list before pivot
        newHead = quickSortRecur(newHead, tmp);
 
        // Change next of last node of the left half to
        // pivot
        tmp = getTail(newHead);
        tmp->next = pivot;
    }
 
    // Recur for the list after the pivot element
    pivot->next = quickSortRecur(pivot->next, newEnd);
 
    return newHead;
}
 
// The main function for quick sort. This is a wrapper over
// recursive function quickSortRecur()
void Lista::quickSort(Lista** headRef){
    (*headRef)= quickSortRecur(*headRef, getTail(*headRef));
    return;
}
 
// Driver code


/* 
class Lista{
    private:
        int dato;
        Lista *sig;
        
    public:
        void ingresarDato(Lista *&,int);
        void ordenar(Lista*&, int);
        void print(Lista *&);
        Lista* particion(Lista *&raiz, Lista *&incio, Lista *&final);
        double orden_ascendente();
};
 
 

Lista* Lista::particion(Lista *&raiz,Lista *&incio, Lista *&final){
    Lista *aux=raiz;// iterador
    Lista *pivot = raiz;
    Lista *greater=NULL;

    while (aux->sig!=NULL){
        if(aux->dato < pivot->dato){
            swap(pivot, aux);

        }
    }
    
    
}
double Lista::orden_ascendente(){
    unsigned t0, t1;
 
 
    
    t1 = clock();
    
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    return time;
}


void Lista::print(Lista *&raiz){
    Lista *nodoFinal2 =raiz;      
    while (nodoFinal2!=NULL){
        cout<<nodoFinal2->dato<<" ";
        nodoFinal2=nodoFinal2->sig;
    }
    //cout<<"\n\nUltimo elemento: "<<raiz->nodoFinal->dato<<endl;
}
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
 */