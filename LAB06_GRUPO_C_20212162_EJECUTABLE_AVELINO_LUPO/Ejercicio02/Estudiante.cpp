#include <stdfix.h>
#include "Estudiante.h"
#include "iostream"

Estudiante::Estudiante( int _CUI, string _nombreCompleto, int _n1, int _n2, int _n3){
    CUI=_CUI;
    nombreCompleto = _nombreCompleto;
    n1= _n1;
    n2= _n2;
    n3= _n3;
}
Estudiante::~Estudiante(){}
string Estudiante::getPrimerNombre(){
    string primerNombre;
    for(int i=0; i<nombreCompleto.length(); i++){
        if(nombreCompleto.substr(i,1) == " "){
            break;
        }else{            
            primerNombre+=nombreCompleto.substr(i,1);
        }      
    }    
    return primerNombre;
}
int Estudiante::getCUI(){return CUI;}
float Estudiante::getPromedio(){return (n1+n2+n3)/(3.00);}
