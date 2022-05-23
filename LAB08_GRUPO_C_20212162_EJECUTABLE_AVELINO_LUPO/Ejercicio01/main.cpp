#include "iostream"
#include "string"
#include "Alumno.h"
#include "Persona.h"

using namespace std;

int main(){

    Alumno estudiante1("Avelino", 29);

    cout<<"Nombre: "<<estudiante1.getNombre()<<endl;
    cout<<"Edad: "<<estudiante1.getEdad()<<endl;

    return 0;
    system ("pause");
}
