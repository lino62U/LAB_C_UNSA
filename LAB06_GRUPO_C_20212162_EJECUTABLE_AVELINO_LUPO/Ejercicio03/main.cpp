
#include <iostream>
#include<string.h>
#include "Persona.h"
#include "Persona.cpp"

using namespace std;


int main(){
    
    string nombre,factual, fnacimiento;
    cout<<"Ingrese su nombre: "; getline(cin,nombre);
    cout<<"Ingrese fecha actual 'DD/MM/YYYY': "; getline(cin,factual);
    cout<<"Ingrese fecha de nacimiento 'DD/MM/YYYY': ";getline(cin,fnacimiento);

    Persona person(nombre,fnacimiento ,factual);
    cout<<"\n\nNombre: "<<person.getNombre()<<endl;
    cout<<"Edad: "<<person.getEdad()<<endl;


}
