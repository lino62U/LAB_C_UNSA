#ifndef COLA_H
#define COLA_H
#pragma once_flag
 
class Cola{
private:
    Cola *sig;
    int dato;
public:
    void insertarDato (Cola *&, int );
    void printCola (Cola *&);
   
};
 
void Cola::insertarDato(Cola *&raiz, int n){
    Cola *newDato = new Cola();
    newDato->dato= n;
    newDato->sig = nullptr;
   
    if(raiz==nullptr){
        raiz=newDato;
    }else{
        Cola *nodoFinal = raiz;
        while(nodoFinal->sig!=nullptr){
            nodoFinal=nodoFinal->sig;
        }
        nodoFinal->sig = newDato;
    }
}
 
void Cola::printCola(Cola *& raiz){
    Cola *nodoFinal= raiz;
    while(nodoFinal!=nullptr){
        std::cout<<nodoFinal->dato<<" ";
        nodoFinal=nodoFinal->sig;
    }
    std::cout<<"\n";
}
 
#endif
