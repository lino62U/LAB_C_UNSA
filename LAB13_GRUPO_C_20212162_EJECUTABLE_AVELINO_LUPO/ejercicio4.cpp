#include "iostream"
using namespace std;

struct empleados{
    string nombre;
    char sexo;
    float sueldo;
};
typedef empleados Empleados;

void datos(Empleados *&a, int n){
    for (int i = 0; i < n; i++){
        cout<<"\nEmpleado N"<<i+1<<": "<<endl;
        cout<<"\tNombre: ";getline(cin,a[i].nombre);
        cout<<"\tSexo (F/M): ";cin>>a[i].sexo;
        cout<<"\tSueldo (S/.): ";cin>>a[i].sueldo;
        cin.ignore();
    }
    
}
void mayor(Empleados *&a, int n){
    Empleados mayor = a[0];
    for (int i = 1; i < n; i++){
        if(mayor.sueldo < a[i].sueldo)
            mayor = a[i];
    }
    cout<<"\nEL de mayor sueldo es: "<<endl;
    cout<<"\tNombre: "<<mayor.nombre<<endl;
    cout<<"\tSexo: "<<mayor.sexo<<endl;
    cout<<"\tSueldo: "<<mayor.sueldo<<endl;
}

void menor(Empleados *&a, int n){
    Empleados menor = a[0];
    for (int i = 1; i < n; i++){
        if(menor.sueldo>a[i].sueldo)
            menor = a[i];
    }
    cout<<"\nEL de menor sueldo es: "<<endl;
    cout<<"\tNombre: "<<menor.nombre<<endl;
    cout<<"\tSexo: "<<menor.sexo<<endl;
    cout<<"\tSueldo: "<<menor.sueldo<<endl;
}
int main(){
    int n;
    cout<<"Numero de empleados: ";cin>>n;
    Empleados *arreglo = new Empleados [n];
    cin.ignore();
    datos(arreglo, n);
    cout<<"\n";
    mayor(arreglo,n);
    menor(arreglo,n);

    return 0;
    system("pause");
}