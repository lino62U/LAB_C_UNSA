#include<iostream>
#include "Lista.h"
#include "Lista.cpp"
using namespace std;

void menu(){
    cout<<"\n\n...Menu..."<<endl;
    cout<<"\t1. Agregar dato \n\t2. Borrar dato \n\t3. Verificar si hay espacio \n\t4. Salir\nOpcion: ";
}

int main(){
    int n, dato;
    Lista array;

    while (true){
        do{
            menu();cin>>n;
        } while (n>4 || n<1);
        if(n==1){
            if(array.verificarEspacio(false)==false){
                cout<<"Dato: ";cin>>dato;
                array.Agregar(dato);
            }else{
                cout<<"Espacio lleno, no se puede ingresar datos"<<endl;
            }
            array.mostrar();
        }else if(n==2){
            if(array.verificarEspacio(true)==false){
                cout<<"Dato: ";cin>>dato;
                array.Eliminar(dato);
                
            }else{
                cout<<"No hay datos en la array"<<endl;
            }
            array.mostrar();
        }else if(n==3){
            if(array.verificarEspacio(false)==false)
                cout<<"Hay espacio libre"<<endl;
            else
                cout<<"No hay espacio libre"<<endl;
        }
        else{
            break;
        }
    }
      
    return 0;
    system("pause");
}
