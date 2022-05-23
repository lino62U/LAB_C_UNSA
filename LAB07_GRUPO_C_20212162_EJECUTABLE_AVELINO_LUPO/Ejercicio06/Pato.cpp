#include "Pato.h"
#include "iostream"

using namespace std;

Pato::~Pato(){}
Pato::Pato(string _nombreCientifico){
    especie = "Pato";
    nombreCientifico = _nombreCientifico;
}
void Pato::habilidad(){
    cout<<"Puede volar..."<<endl;
}
void Pato::imprimir(){
    cout<<"\nEspecie: "<<especie<<endl;
    cout<<"Nombre cientifico: "<<nombreCientifico<<endl;
    habilidad();
}