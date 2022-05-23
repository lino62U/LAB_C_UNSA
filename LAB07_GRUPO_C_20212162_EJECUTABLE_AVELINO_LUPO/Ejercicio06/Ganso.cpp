#include "Ganso.h"
#include "iostream"

using namespace std;

Ganso::~Ganso(){}
Ganso::Ganso(string _nombreCientifico){
    especie ="Ganso";
    nombreCientifico = _nombreCientifico;
}
void Ganso::habilidad(){
    cout<<"Puede volar..."<<endl;
}
void Ganso::imprimir(){
    cout<<"\nEspecie: "<<especie<<endl;
    cout<<"Nombre cientifico: "<<nombreCientifico<<endl;
    habilidad();
}