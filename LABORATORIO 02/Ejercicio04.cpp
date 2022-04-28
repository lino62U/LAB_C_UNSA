/*
Escriba un código que solicite ingresar dos números 'x' y 'y', tal que 'x' < 'y'.
Muestre todos los números primos que se encuentren entre el rango de valores,
de no encontrarse, mostrar el primo más cercano a 'x' o 'y'.
*/


#include<iostream>
using namespace std;
bool division(int n){
bool band=true;
for (int i = 2; i < n; i++){
if(n%i==0){band=false;}
}
return band;
}
void primos(int a, int b){
    bool band=false;
    int i=a;
    do{
        if(division(i)==true){
            cout<<i<<" ";
            band=true;
        }
        i++;
    } while (i<b);

    if(band ==false){
        while(true){
            if(division(a)==true){
                cout<<"Primo mas cercano: "<<a<<endl;
                break;
            }
            else if(division(b)==true){
                cout<<"Primo mas cercano: "<<b<<endl;
                break;
            }
            else{
                a--;
                b++;
            }
        }
    }
}
int main(){
    int a, b;
    cout<<"Ingrese un numero: ";cin>>a;
    
    do{
        cout<<"\nIngrese un numero que "<<a<<": ";cin>>b;
    } while (a>b);
    
    primos(a,b);
    return 0;
}
