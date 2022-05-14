
/*
 Construya una lista enlazada simple utilizando sólo punteros. Añada las funciones de insertar
 y eliminar un elemento. En la función insertar se debe asegurar que los números insertados estén 
 en orden creciente. Simule el proceso con 10000 números aleatorios sin que el programa falle.

*/


#include <bits/stdc++.h>
 
using namespace std;
 
struct Nodo {
   int dato =6;
   Nodo *sig;
};
void mostrar(Nodo *&raiz){
   while (raiz!=NULL)    {
       cout<<raiz->dato<<" ";
       raiz=raiz->sig;
   }
}
void insertarNodo(Nodo *&raiz, int n){
   Nodo *NodoFinal = raiz;
   Nodo *NodoAnterior = raiz;
   Nodo *nuevoNodo= new Nodo();
 
   nuevoNodo->dato= n;
   nuevoNodo->sig=NULL;
  
   if(raiz==NULL){
       raiz=nuevoNodo;
       NodoFinal=raiz;
        NodoAnterior=raiz;
   }
   else{
 
       if(NodoFinal->dato >= n){
           nuevoNodo->sig=NodoFinal;
           raiz=nuevoNodo;
       }else{
           if(NodoFinal->sig== NULL){
               NodoFinal->sig=nuevoNodo;
           }else{
               bool band=false;
               Nodo *aux=NULL;
              
               while (NodoFinal->sig!=NULL){
 
                   if(NodoFinal->dato >= n){
                       band=true;
                       if(NodoFinal->dato==n){
                           if(NodoFinal->sig==NULL){
 
                               NodoAnterior=NodoFinal;
                               NodoFinal=NodoFinal->sig;
                           }else{
                               aux=NodoFinal->sig;
                                NodoFinal->sig=NULL;
                           }
                       }
                       else{
                           aux=NodoFinal;
                           NodoFinal=NodoAnterior;
                           NodoFinal->sig=NULL;
                       }
                   }else{
                      
                       NodoAnterior=NodoFinal;
                       NodoFinal=NodoFinal->sig;
                   }
               }
               if(band==true){
                   NodoFinal->sig=nuevoNodo;
                   nuevoNodo->sig=aux;
               }
               else{
                    NodoFinal->sig=nuevoNodo;
               }
           }
       }      
   }
  
}
 
void busqueda(Nodo *&raiz, int n){
   Nodo *NodoFinal=raiz;
   while (NodoFinal!=NULL)    {
       if(NodoFinal->dato>n){
           cout<<"Es mayor"<<endl;
 
       }else{
           NodoFinal=NodoFinal->sig;
       }
   }
}
 
bool eliminarNodo(Nodo *&raiz, int n){
   Nodo *NodoFinal=raiz;
   Nodo *NodoAnterior=raiz;
   while (NodoFinal!=NULL)    {
       if(NodoFinal->dato==n){
 Nodo *aux = NodoFinal;
           NodoAnterior->sig=NodoFinal->sig;
           delete aux;
           return true;
       }else{
           NodoFinal=NodoAnterior;
           NodoFinal=NodoFinal->sig;
       }
   }
   return false;
}
 
void menu(){
 
   cout<<"\n ----  MENU ----"<<endl;
   cout<<"\n 1. Insertar Nodo \n2. Eliminar Nodo \n3.Salir \nOpcion: ";
}
 
int main(){
 
   int opc, p;
   const int size=10;
 
   Nodo* raizLista = NULL;
// generar random
   srand(time(NULL));
   for (int i = 0; i < size; i++){
       insertarNodo(raizLista,1+random()%20);
   }
   mostrar(raizLista);
   while (true){
       do{
          menu();cin>>opc;
       } while (opc<1|| opc>3);
       if(opc==1){
           cout<<"Nuevo Nodo: ";cin>>p;
           insertarNodo(raizLista, p);
           mostrar(raizLista);
       }else if(opc==2){
           cout<<"Nodo Eliminar: ";cin>>p;
           if(eliminarNodo(raizLista, p)==true){
               cout<<"Nodo eliminado"<<endl;
           }else{
               cout<<"No se encuentra dicho nodo"<<endl;
           }
           mostrar(raizLista);
       }
       else{
           break;
        }
   }
  
 
   return 0;
}
