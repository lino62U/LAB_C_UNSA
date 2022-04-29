// 5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las
// siguientes opciones:
//   a. Introducir un valor x entero comprendido entre 0 y 100.
//   b. Validar que sea un valor par.
//   c. Sumar todos los números impares desde el 0 hasta el valor de x

#include<iostream>
using namespace std;

int sumaImpares(int x){
    int sum=0;
    for (int i = 1; i < x; i+=2){
        sum+=i;
    }
    return sum;
}
  
int main(){
    int a;
    do
    {
        cout<<"\nIngrese un numero par entre 0 y 100: ";cin>>a;
 
    } while ((a<0 || a>100) || a%2!=0);
    cout<<"Suma de numeros impares de 0 hasta "<<a<<": "<<sumaImpares(a)<<endl;
   
    return 0;
}
