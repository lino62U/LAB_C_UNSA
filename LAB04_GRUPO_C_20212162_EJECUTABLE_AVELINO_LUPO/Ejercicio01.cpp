// 1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el nombre, apellido, edad y DNI y luego lo muestre por pantalla.

#include"iostream"
#include<string.h>
using namespace std;
 
struct Persona{
    string nombre;
    string apellido;
    int edad;
    int DNI;
};
 
void Mostrar( Persona listaPersona[]){
    for (int i = 0; i <3; i++){
        cout<<" Persona N° "<<i+1<<": "<<endl;
        cout<<"\tNombre: "<<listaPersona[i].nombre<<endl;
        cout<<"\tApellido: "<<listaPersona[i].apellido<<endl;
        cout<<"\tEdad: "<<listaPersona[i].edad<<endl;
        cout<<"\tDNI: "<<listaPersona[i].DNI<<endl;
        cout<<endl;
    }
   
}
int main(){
 
    Persona listaPersona[3];
 
    for (int i = 0; i <3; i++){
        cout<<" Persona N° "<<i+1<<": "<<endl;
        cout<<"\tNombre: ";getline(cin, listaPersona[i].nombre);
        cout<<"\tApellido: ";getline(cin,listaPersona[i].apellido);
        cout<<"\tEdad: ";cin>>listaPersona[i].edad;
        cout<<"\tDNI: ";cin>>listaPersona[i].DNI;
        cin.ignore(10000,'\n');
        cout<<endl;
    }
   
    for(int i=0;i<100;i++){cout<<"*";}
    cout<<"\nDatos lista de personas\n";
    Mostrar(listaPersona);
 
    return 0;
 
}
