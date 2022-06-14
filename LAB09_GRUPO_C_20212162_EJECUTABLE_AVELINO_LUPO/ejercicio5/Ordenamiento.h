#pragma once
#include"iostream"
#include "algorithm"
#include "vector"
using namespace std;

template<class P>
class Ordenamiento{
    private:
        P *ptr;
        int b, e;
    public:
        Ordenamiento(P*, int, int);
        ~Ordenamiento();
        void OrdenarAscendente();
        void OrdenarDescendente();
        void mostrar();
};

template<class P>
Ordenamiento <P>::Ordenamiento(P *ptr2, int x, int y){
    ptr=ptr2;
    b=x;
    e=y;
}

template<class P>
Ordenamiento<P>::~Ordenamiento(){}

template<class P>
void Ordenamiento<P>::OrdenarAscendente(){
    
    vector<P> aux2;
    for(int i=b; i<=e; i++){
        aux2.push_back(*(ptr+i));
    }
    
    for(int i=b; i<=e; i++){
        *(ptr+i)=aux2[i];
    }
}
template<class P>
void Ordenamiento<P>::OrdenarDescendente(){
    
    vector<P> aux2;
    for(int i=b; i<=e; i++){
        aux2.push_back(*(ptr+i));
    }
    sort(aux2.rbegin(), aux2.rend());
    for(int i=b; i<=e; i++){
        *(ptr+i)=aux2[i];
    }
}

template <class P>
void Ordenamiento<P>::mostrar(){
    for (int i = b; i <=e; i++){
        cout<<*(ptr+i)<<" ";
    }
}