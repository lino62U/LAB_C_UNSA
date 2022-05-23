#include "Gallina.h"
#include "iostream"

using namespace std;

Gallina::~Gallina(){}
Gallina::Gallina(string _nombreCientifico){
    especie = "Gallina";
    nombreCientifico = _nombreCientifico;
}
void Gallina::habilidad(){
    cout<<"No puede volar..."<<endl;
}
void Gallina::imprimir(){
    cout<<"\nEspecie: "<<especie<<endl;
    cout<<"Nombre cientifico: "<<nombreCientifico<<endl;
    habilidad();
}