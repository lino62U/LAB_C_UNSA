//4. Implementar un programa que rellene un array con los números primos comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.
#include<iostream>
using namespace std;
 
bool division(int n){
    for (int i = 2; i < n; i++)
        if(n%i==0){return false;}
   
    return true;
}

int main(){
    int n=1;
    int *primos=new int[n];
   
    for (int i = 100; i >= 2; i--){
        if(division(i)== true){
            primos[n-1]=i;
            n++;
        }
    }
 
    for(int i=0; i<n-1;i++)
        cout<<primos[i]<<" ";
   
 
    return 0;
}
