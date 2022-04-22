#include <iostream> 

using namespace std;

/*
9. Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean
negativos
*/
int main(){
    
    int sum(0), x, c(0);
    for (int i = 0; i < 10; i++){
        cout<<"N? ";cin>>x;
        if(x<0)
            sum+=x;
    }
      
    cout<<"\nLa suma de los numeros negativos es "<<sum<<endl;
    
    return 0;
}
