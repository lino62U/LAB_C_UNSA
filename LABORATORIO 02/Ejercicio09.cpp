/*
9. Escribir un programa que pida al usuario un número entero y muestre por
pantalla un triángulo rectángulo como el de más abajo, de altura el número
introducido.
*
**
***
****
*****
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"N: ";cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
