#include "iostream"
#include "Cola.h"
using namespace std;

void IngresarDatos(Cola *&raiz, int a){
    int n;
    for (int i = 0; i < a; i++){
            cout<<"N"<<i+1<<": ";cin>>n;
            raiz->insertarDato(raiz, n);
    }
}

void menu(){
    cout<<"...\nMenu..."<<endl;
    cout<<"1. Ingresar edades (Hombres y Muejeres)"<<endl;
    cout<<"2. Comparar Edades"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"\topc? ";
}
void separador(){
    for (int i = 0; i < 100; i++)
        cout<<"*";
    cout<<endl;
}

int main (){

	Cola *hombre=nullptr;
	Cola *mujeres=nullptr;
	
	int conH =0, conM=0;  
    int it, opc;

    while(true){
        menu();cin>>opc;
        if (opc==1){
            separador();
            int h1;
            cout<<"Cuantas edades de Hombres desea ingresar? ";cin>>h1;
            IngresarDatos(hombre, h1);
            cout<<"\nCuantas edades de Mujeres desea ingresar? ";cin>>h1;
            IngresarDatos(mujeres, h1);

            cout<<"\nHombres Edades: "<<endl;
            cout<<"\t";hombre->printCola(hombre);
            cout<<"Mujeres Edades: "<<endl;
            cout<<"\t";mujeres->printCola(mujeres);
            cout<<endl;        
        }
        else if(opc==2){
            separador();
            cout<<"\nComparar edades..."<<endl;
            cout<<"\tNumero de iteraciones a comparar: ";cin>>it;
            cout<<"\tHombres  \t>\tMujeres"<<endl;
            
            for (int i=0; i<it; i++) {
                cout<<"\t"<<hombre->getDato(hombre)<<"  \t\t\t"<<mujeres->getDato(mujeres)<<endl;
                if(hombre->getDato(hombre)> mujeres->getDato(mujeres))
                    conH++;
                else
                    conM++;
              
                hombre->insertarDato(hombre,hombre->getDato(hombre));
                hombre->eliminarDato(hombre);
                
                mujeres->insertarDato(mujeres,mujeres->getDato(mujeres));
                mujeres->eliminarDato(mujeres);
            }
            cout<<"\n\tHombres: "<<conH<<"\tMujeres: "<<conM<<endl;
            if(conH>conM)
                cout<<"\nEn "<<it<<" iteraciones, los de mayor edad son los hombres"<<endl;
            else
                cout<<"\nEn "<<it<<" iteraciones, los de mayor edad son las mujeres"<<endl;
        }
        else if(opc==3)
            break;
        else
            cout<<"Opcion Incorrecta"<<endl;
        separador();
    }
    
	return 0;
	system("pause");
}
