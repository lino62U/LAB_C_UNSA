#include <stdfix.h>
#include "Matriz.h"
#include "iostream"
using namespace std;

Matriz::Matriz(){
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            arrayy[i][j]=1+rand()%9;
        }
    }
}

Matriz::~Matriz(){}

void Matriz::mostrarMatriz(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            cout<<arrayy[i][j]<<" ";
        }
        cout<<endl;
    }
}   

void Matriz::busqueda(int n){
    bool band=false;
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            if(arrayy[i][j]==n){
                cout<<"["<<i<<"]["<<j<<"]: "<<arrayy[i][j]<<endl;
                band=true;
                break;
            }
        }
    }
    if(band==false)
        cout<<"Dato no encontrado en la matriz"<<endl;
}
