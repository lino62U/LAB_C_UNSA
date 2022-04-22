#include <iostream> 
#include<cmath>

using namespace std;

/*
5. Elabore un código que reciba como entrada una secuencia de caracteres que contiene
un numero flotante y retorne el número redondeado.
*/
int main(){
    
    float n;
    cout<<"N? ";cin>>n;
    cout<<"\nNumero redondeado: "<<round(n)<<endl;
    return 0;
}
