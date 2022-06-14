#include "iostream"
#include "Ordenamiento.h"

using namespace std;

int main(){
    int ArrayEntero [9] = {5,7,2,8,6,1,3,4,9};
    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};


    Ordenamiento<int> obj1(ArrayEntero, 0, 8);
    obj1.OrdenarAscendente();
    cout<<"Array Entero forma ascendente: ";
    obj1.mostrar();

    Ordenamiento <float> obj2(ArrayFloat, 0, 4);
    obj2.OrdenarDescendente();
    cout<<"\n\nArray Float forma descendente: ";
    obj2.mostrar();

    return 0;
    system("pause");
}