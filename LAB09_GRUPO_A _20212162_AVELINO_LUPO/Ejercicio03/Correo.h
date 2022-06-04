#pragma once
#include "iostream"
#include "string"
#include "ctype.h"
using namespace std;
template <class T, class P>
class Correo{
    private:
        T caracter;
        P apellido;
    public:
        Correo(T,P);
        ~Correo();
        P getCorreo();
};
template <class T, class P>
Correo <T,P> ::Correo(T ct, P ap){
    caracter= ct ;
    apellido = ap;
    
    
}

template <class T, class P>
Correo <T,P> ::~Correo(){}
template <class T, class P>
P Correo <T,P> ::getCorreo(){
    P aux;
    aux.insert(0,1,caracter);
    
    return aux +"/"+apellido+"@unsa.edu.pe";
}
