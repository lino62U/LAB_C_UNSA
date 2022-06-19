#include "iostream"
#include "Cola.h"
using namespace std;
 
void menu(){
    cout<<"...Menu..."<<endl;
    cout<<"1. Ingresar dato "<<endl;
    cout<<"2. Mostrar Cola "<<endl;
    cout<<"3. Eliminar Nodo"<<endl;
    cout<<"4. Buscar elemento "<<endl;
    cout<<"5. Salir"<<endl;
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
        }else if(opc==4){
            int n3;
            cout<<"Dato a buscar: ";cin>>n3;
            if(raiz->buscarElemento(raiz,n3))
                cout<<"\tDato encontrado en la cola"<<endl;
            else
                cout<<"\tDato No encontrado en la cola"<<endl;
        }
        else if(opc==5)
            break;
        else
            cout<<"Opc inconrrecta"<<endl;
        separador();
    }
   
 
    return 0;
    system("pause");
}
