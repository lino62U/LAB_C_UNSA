#include"iostream"
#include "MayorMenor.h"

using namespace std;

int main(){

    int ArrayEntero [5] = {10,7,2, 8, 6};
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};

    MayorMenor <int> obj1(ArrayEntero);
    cout<<"Mayor de objeto1 es: "<<obj1.getMayor()<<endl;
    cout<<"Menor de objeto1 es: "<<obj1.getMenor()<<endl;

    MayorMenor <float> obj2(ArrayFloat);
    cout<<"\nMayor de objeto2 es: "<<obj2.getMayor()<<endl;
    cout<<"Menor de objeto2 es: "<<obj2.getMenor()<<endl;

    return 0;
    system ("pause");
}