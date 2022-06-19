#include "iostream"
#include "Cola.h"
using namespace std;
 
void menu(){
    cout<<"...Menu..."<<endl;
    cout<<"1. Ingresar dato "<<endl;
    cout<<"2. Mostrar Cola "<<endl;
    cout<<"3. Eliminar Nodo"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"opc?: ";
}
void separador(){
    for (int i = 0; i < 100; i++)
        cout<<"*";
    cout<<endl;
}
 
int main (){
    Cola *raiz=nullptr;
    int n, opc, n1;
 
 
// Codigo para comprobar la eliminacion de un dato en una Cola
    /*
    for(int i=0;i<4;i++){
        raiz->insertarDato(raiz, i+1);
    }
    cout<<"Cola generada: "<<endl;
    raiz->printCola(raiz);
    cout<<"Eliminar datos de la cola"<<endl;
    for(int i=0;i<5;i++){
        cout<<"\tDato eliminado: "<<raiz->getDato(raiz)<<endl;
        raiz->eliminarDato(raiz);
    }
    cout<<"\nLista despues de eliminar"<<endl;
    raiz->printCola(raiz);
    */
   
   
    while (true){
        menu();cin>>opc;
       
        if(opc==1){
            separador();
            cout<<"Cuantos datos desea ingresar? ";cin>>n;
            for (int i = 0; i < n; i++){
                cout<<"N"<<i+1<<": ";cin>>n1;
                raiz->insertarDato(raiz,n1);
            }
            cout<<"Datos guardados"<<endl;
        }
        else if(opc==2){
            separador();
            cout<<"Datos de la Cola"<<endl;
            cout<<"\t";
            raiz->printCola(raiz);
        }
        else if(opc==3){
            separador();
            cout<<"Nodo eliminado: "<<raiz->getDato(raiz)<<endl;
            raiz->eliminarDato(raiz);
        }
        else if(opc==4)
            break;
        else
            cout<<"Opc inconrrecta"<<endl;
        separador();
    }
   
 
    return 0;
    system("pause");
}
