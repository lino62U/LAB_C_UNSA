#include "iostream"
#include "Punto.h"
#include "Forma.h"
#include "Rectangulo.h"

using namespace std;

Rectangulo::~Rectangulo(){}
Rectangulo::Rectangulo(){}
Rectangulo::Rectangulo(float Lmayor, float Lmenor){
    ladoMayor = Lmayor;
    ladoMenor =  Lmenor;
}
void Rectangulo:: imprimir(){
    cout<<"\nTipo: "<<nombreForma<<endl;
    cout<<"\tColor: "<<color<<endl;
    cout<<"\tCoordenadas: ("<<coordenadas.getX()<<" , "<<coordenadas.getY()<<")"<<endl;
    cout<<"\tLado mayor: "<<ladoMayor<<endl;
    cout<<"\tLado menor: "<<ladoMenor<<endl;
}
float Rectangulo::area(){
     return ladoMayor*ladoMenor;
}
float Rectangulo::perimetro(){
     return 2*(ladoMayor+ladoMenor);
}
void Rectangulo::changeSize(float n){
    ladoMayor*=n;
    ladoMenor*=n;
}
