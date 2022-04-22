#include <iostream> 
#include <string.h>

using namespace std;



/*
6. Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
en binario.

/*
string revertir(string bin){
    string newbin="";
    for(int i=bin.size();i>=0;i--)
        newbin=newbin+bin.substr(i,1);
    return newbin;
}
int main(){
    int n;
    string bin="";
    do
    {
        cout<<"Ingrese un numero mayor a 100 y menor a 999: ";cin>>n;
    } while (n<=100||n>=999);
    
    while (n>1){
        bin= bin + to_string(n%2);
        n=n/2;
    }
    bin= bin + to_string(n);
    cout<<"Binario: "<<revertir(bin)<<endl;
    
    return 0;
}
