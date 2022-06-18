#include <iostream>
#include "Pila.h"
 
using namespace std;

void moverDisco(Pila * &a,Pila * &b){
    cout<<"\t"<<a->getName(a)<<" (disco "<<a->getNodo(a)<<") -> "<<b->getName(b)<<endl;
    b->insertarNodo(b,a->getNodo(a));
	a->eliminarNodo(a);
}

void hanoi(Pila *&p1,Pila *& p2,Pila * &p3, int n){    
    if(n==1){
        moverDisco(p1,p3);
    }else{
        hanoi(p1, p3, p2, n-1);
        moverDisco(p1,p3);
        hanoi(p2,p1,p3,n-1);
    }
}

class hola{
    private:
        Pila *ptr;
        char name;  
    public:
        hola(char nae):name(nae){};
        char getName(){return name;}
        void insertarNodo(int n){
            ptr->insertarNodo(ptr,n);
        }
        void printlista(){
            ptr->printList(ptr);
        }
};
void menu(){
    cout<<"\n\n\t...Menu..."<<endl;
    cout<<"1. Insertar discos"<<endl;
    cout<<"2. Resolver torre de hanoi"<<endl;
    cout<<"3. Mostrar pilas"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"opc? ";
}
void separador(){
    for (int i = 0; i < 100; i++){
        cout<<"*";
    }
    cout<<endl;
    
}
int main(){
    Pila *pila1 = new Pila('A');
    Pila *pila2 = new Pila('B');
    Pila *pila3 = new Pila('C');
    
    int opc;
    int n;
    while (true){
        menu();cin>>opc;
        if (opc==1){
            separador();
            cout<<"Numero de discos: ";cin>>n;
            for (int i = 0; i < n; i++)
                pila1->insertarNodo(pila1,i+1);
        }else if(opc==2){
            separador();
            cout<<"\nResolución: mover de pila ( ) a ( )"<<endl;
            hanoi(pila1,pila2,pila3,n);
        }
        else if(opc==3){
            separador();
            cout<<"\nMirar PIlas"<<endl;
            cout<<"\tPila A: ";
            pila1->printList(pila1);
            cout<<"\tPila B: ";
            pila2->printList(pila2);
            cout<<"\tPila C: ";
            pila3->printList(pila3);
        }
        else if(4)
            break;
        else
            cout<<"Ingrese opcion valida"<<endl;
        
        separador();
    }
    

    return 0;
    system("pause");
}