#include <iostream> 

using namespace std;

/*
8. Escribir un programa que calcule la media de x cantidad números introducidos por el
teclado.
*/
int main(){
    
    int sum(0), x, c(0);
    while (x!=-1)
    {
        cout<<"N?: ";cin>>x;
        cout<<"Ingrese -1 para dejar de ingresar mas numeros"<<endl;
        if(x!=-1){
            sum+=x;
            c++;
        }
        
    }
    cout<<"La media de los "<<c<< " numeros ingresados es: "<<sum/(c+0.0)<<endl;
    
    return 0;
}
