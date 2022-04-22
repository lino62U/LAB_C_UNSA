#include <iostream> 
#include <string.h>
#include <cctype>
using namespace std;

/*
2. Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).

/*
void minusculas(string &apePaterno){
    for (int i = 0; i < apePaterno.size(); i++){   
        apePaterno[i] =tolower(apePaterno[i]);
    }
    
}
int main(){
    string nombre, apePaterno, apMaterno, correo;
    cout<<"Primer Nombre: ";getline(cin,nombre);
    cout<<"Apellido Paterno: ";getline(cin,apePaterno);
    cout<<"Apellido Materno: ";getline(cin,apMaterno);
    
    minusculas(nombre);
    minusculas(apMaterno);
    minusculas(apePaterno);
   
    correo= nombre.substr(0,1) + apePaterno  + apMaterno.substr(0,1)+"@unsa.edu.pe";
    cout<<"Su correo es: "<<correo<<endl;

}
