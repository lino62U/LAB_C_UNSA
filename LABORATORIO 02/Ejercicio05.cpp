/*
5. Elabore un programa que lea n números y determine cuál es el mayor, el menor
y la media de los números leídos.
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    int mayor=0,menor=0,i(0),sum(0);
    cout<<"Ingrese 0 para terminar el codigo"<<endl;
    do
    {
        cout<<"N: ";cin>>a;
        if(a!=0){
            mayor=menor=a;
            if(a>mayor){mayor=a;}
            if(a<menor){menor=a;}
            sum+=a;
            i++;
        }
    } while (a!=0);
    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;
    cout<<"La media de los numeros ingresados es: "<<sum/(i+0.0)<<endl;
    return 0;
}
