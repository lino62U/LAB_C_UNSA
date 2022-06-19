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
    void eliminarDato(Cola *&);
    int getDato(Cola *&);
    bool buscarElemento(Cola *&, int);
   
};
int Cola::getDato(Cola *&raiz){
    return raiz->dato;
}
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
void Cola::eliminarDato(Cola *&raiz){
    if(raiz!=nullptr){
        if(raiz->sig!=nullptr){
            Cola *nodoPrimero  = raiz;
            raiz = raiz->sig;
            delete nodoPrimero;
        }else{
            std::cout<<"\tNo se puede eliminar el ultimo elemento\n";
        }
    }
    return;
}
bool Cola::buscarElemento(Cola *&raiz, int n){
    Cola *nodoFinal= raiz;
    while(nodoFinal!=nullptr){
        if(nodoFinal->dato ==n)
            return true;
        nodoFinal=nodoFinal->sig;
    }
    return false;
}
 
#endif
