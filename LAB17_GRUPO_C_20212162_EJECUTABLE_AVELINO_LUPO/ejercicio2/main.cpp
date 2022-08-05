#include "iostream"
#include "ArbolB.h"
#include "ctime"
using namespace std;
template <class T>
void randoChar(ArbolB<T> *aux, int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        aux->insertData('a' + rand() % 26);
    }
    
}
template <class T>
void insertarRandoValue(ArbolB<T> *aux, int n, int a){
    
    srand(time(NULL));
    for(int i=0;i<n;i++){
        aux->insertData(1+rand()%100 +0.4 + a);
    }
}
int main(){
    ArbolB<float> tree;
    ArbolB<int> tree2;
    ArbolB<double> tree3;
    ArbolB<char> tree4;
    

    // SE PUEDE MODIFICAR PARA INGRESAR 100 DATOS
    int n=10;

    
    insertarRandoValue(&tree, n, 3.2);
    insertarRandoValue(&tree2, n, 0);
    insertarRandoValue(&tree3, n, 3.1212121212212);
    randoChar(&tree4, n);
    cout<<"Arbol de FLOAT: "<<endl;
    tree.verArbol();
    cout<<"\nArbol de INT: "<<endl;
    tree2.verArbol();
    cout<<"\nArbol de double: "<<endl;
    tree3.verArbol();
    cout<<"\nArbol de char: "<<endl;
    tree4.verArbol();
    
    return 0;
}
