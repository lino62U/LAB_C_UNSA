#include <iostream> 

using namespace std;

/*
7. Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.
*/
bool divisor(int a, int b){
    bool band=false;
    if(a%b==0)
        band=true;
    return band;
}

int main(){
    int a, b;
    cout<<"Ingrese dos numeros enteros: ";cin>>a>>b; 
    if(divisor(a,b)==true)
        cout<<b<<" es divisor "<<a<<endl;
    else if(divisor(b,a)==true)
        cout<<a<<" es divisor "<<b<<endl;
    else
        cout<<a<<b<<" no son divisores"<<endl;

    return 0;
}
