#include "iostream"
#include "cmath"
#include "Punto.h"
#include "Forma.h"
#include "Elipse.h"

using namespace std;

Elipse::Elipse(){}
Elipse::~Elipse(){}
Elipse::Elipse(float mayor, float menor){
     radioMayor = mayor;
     radioMenor = menor;
}
float Elipse::area(){
     return M_PI * (radioMayor*radioMenor);
}

void Elipse:: imprimir(){
    cout<<"\nTipo: "<<nombreForma<<endl;
    cout<<"\tColor: "<<color<<endl;
    cout<<"\tCoordenadas: ("<<coordenadas.getX()<<" , "<<coordenadas.getY()<<")"<<endl;
    cout<<"\tRadio mayor: "<<radioMayor<<endl;
    cout<<"\tRadio menor: "<<radioMenor<<endl;
}

