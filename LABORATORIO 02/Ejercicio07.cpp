/*
7. Calcula el promedio de 3 notas para n estudiantes.
*/

#include<iostream>
using namespace std;
int main(){
    float n1,n2,n3;
    int n;
    cout<<"Numero de estudiantes: ";cin>>n;
    for(int i=0;i<n;i++){
        float aux=0;
        cout<<"Estudiante N° "<<i+1<<endl;
        cout<<"\tNota 1: ";cin>>n1;
        cout<<"\tNota 2: ";cin>>n2;
        cout<<"\tNota 3: ";cin>>n3;
        aux = (n1+n2+n3)/3;
        cout<<"Promedio: "<<aux<<endl;
    }
    return 0;
}
