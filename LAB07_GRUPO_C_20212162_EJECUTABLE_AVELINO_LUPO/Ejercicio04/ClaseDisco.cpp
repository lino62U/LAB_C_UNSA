#include "ClaseDisco.h"
#include "iostream"

using namespace std;

ClaseDisco::~ClaseDisco(){}
ClaseDisco::ClaseDisco(string _genero, string _autor){
    genero = _genero;
    tipo = "Disco";
    autor = _autor;
}
void ClaseDisco::Imprimir(){
    cout<<"Tipo: "<<tipo<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Autor: "<<autor<<endl;
}