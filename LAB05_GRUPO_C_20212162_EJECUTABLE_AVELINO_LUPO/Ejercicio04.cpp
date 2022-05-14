/*
    4. Construya una lista enlazada que almacene tanto números como cadenas de texto utilizando 
    punteros void. Incluya una función de búsqueda de muestre un dato almacenado además del 
    tipo de dato que se encuentra almacenado (int, float, char,...)
*/

#include<iostream>
#include <vector>
 
using namespace std;
 
struct  Nodos{
   
    void *ptrVoid;
    char tipo;
Nodos *sig=NULL;
};
 
void insertarNodos(Nodos *&raiz, void *ptr, char _tipo){
 
    Nodos *nodoFinal = raiz;
    Nodos *nuevoNodo = new Nodos();
    nuevoNodo->ptrVoid= ptr;
    nuevoNodo->tipo=_tipo; 
   
    if (raiz==NULL){
        raiz=nuevoNodo;
         nuevoNodo->sig=NULL;
    }else{
        while (nodoFinal->sig!=NULL){
            nodoFinal = nodoFinal->sig;
        }
        nodoFinal->sig=nuevoNodo;
        nuevoNodo->sig=NULL;
    }
}
 
 
void mostrar(Nodos *&raiz){
    Nodos *nodoFinal = raiz;
    while (nodoFinal!=NULL){
        cout<<nodoFinal->tipo<<" ";
        nodoFinal=nodoFinal->sig;
    }
}
 
bool convert(char *&x){
    if( *(typeid(atoi(x)).name())=='i')
        return true;
   
    return false;
}
 
void imprimirDato(void *ptr, char tipo){
    char *type=&tipo;
    if (tipo=='i')
        cout<<*((int*)ptr)<<endl;
    else if(tipo=='f')
        cout<<*((float*)ptr)<<endl;
    else if(tipo=='b')
        cout<<*((bool*)ptr)<<endl;
    else if(tipo=='c')
        cout<<*((char*)ptr)<<endl;
    else if(tipo=='P')
        cout<<*((string*)ptr)<<endl;
    else if(tipo=='d')
        cout<<*((double*)ptr)<<endl;
    else if(tipo=='e')
        cout<<*((long double*)ptr)<<endl;
    else if(tipo=='S'){
        cout<<typeid(ptr).name();
        //cout<<*((string*)ptr)<<endl;
    }
    else if(convert(type)==true){
        cout<<"No se puede visualizar por ser de tipo struct o class"<<endl;
    }
    else
        cout<<"Tipo de dato no encontrado en la BD"<<endl;
   
}
 
void tipoDato(char type){
   
    vector <char> lst={'i','f','b','c','P','d','e','S'};
    vector <string> lst2={"int","float","bool","char","Puntero","double","long double","string"};
    for(auto i = 0; i < lst.size(); i++){
        if(lst[i]==type)
            cout<<lst2[i];
            }
   
   
}
 
 
void busqueda(Nodos *&raiz, void *dato){
    Nodos *nodoFinal = raiz;
    char aux1, *aux2=&aux1;
    while (nodoFinal!=NULL){
        if(dato==nodoFinal->ptrVoid){
            cout<<"\nTipo: "; tipoDato(nodoFinal->tipo);
            aux1=nodoFinal->tipo;
            cout<<"\nDato: ";imprimirDato(nodoFinal->ptrVoid,nodoFinal->tipo);
            break;
        }
        nodoFinal=nodoFinal->sig;
    }
}
 
class Clases{
    public:
        string name;
        Clases(){}
        ~Clases(){}
};
 
 
 
int main(){
    Nodos *lista=NULL;
    int  size=5;
    int a=2;
    float b=4.5;
    bool c=true;
    char d='a';
    Nodos e;
    Clases f;
    string h="3Hola";
    string *g=&h;
 
    insertarNodos(lista, &a, *(typeid(a).name()));
    insertarNodos(lista, &b, *(typeid(b).name()));
    insertarNodos(lista, &c, *(typeid(c).name()));
    insertarNodos(lista, &d, *(typeid(d).name()));
    insertarNodos(lista, &g, *(typeid(g).name()));
    insertarNodos(lista, &e, *(typeid(e).name()));
    insertarNodos(lista, &f, *(typeid(f).name()));
    insertarNodos(lista, &h, *(typeid(h).name()));
   
    cout<<"Se muestra los tipos de datos almacenados en la lista enlazada"<<endl;
    mostrar(lista);
   
    // BUSCAR DATO
    busqueda(lista,&f);
 
 
    return 0;
 
}

