#include<iostream>
#include "stdfix.h"
#include "Estudiante.h"
#include "Estudiante.cpp"

using namespace std;

int main(){

    Estudiante estudiante(20212162, "Avelino Lupo Condori", 13, 13, 13);
    
    cout<<"CUI: "<<estudiante.getCUI()<<endl;
    cout<<"Nombre: "<<estudiante.getPrimerNombre()<<endl;
    cout<<"Promedio: "<<estudiante.getPromedio()<<endl;
    return 0;
    system("pause");
}
