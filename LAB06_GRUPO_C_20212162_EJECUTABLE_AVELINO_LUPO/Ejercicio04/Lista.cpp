
#include <stdfix.h>
#include "Lista.h"
#include "iostream"


Lista::Lista(){
    for (int i = 0; i < 5; i++){
        lista[5].estado=false;
    }
}

Lista::~Lista(){}

void Lista::Agregar(int x){
    for (int i = 0; i < 5; i++){
        if(lista[i].estado==false){
            lista[i].data=x;
            lista[i].estado=true;
            break;
        }
    }
}

bool Lista::verificarEspacio(bool aux){
    for (int i = 0; i < 5; i++){
        if(lista[i].estado==aux){
            return false;
        }
    }
    return true;
}

void Lista::Eliminar(int x){
    bool band=false;
    for (int i = 0; i < 5; i++){
        if(lista[i].data==x){
            lista[i].data=0;
            lista[i].estado=false;
            band =true;
        }
    }
    if(band=false)
        cout<<"Dato no encontrado"<<endl;
}

void Lista::mostrar(){
    for (int i = 0; i < 5; i++){
        if(lista[i].estado==true){
            cout<<lista[i].data<<" ";
        }
    }
}