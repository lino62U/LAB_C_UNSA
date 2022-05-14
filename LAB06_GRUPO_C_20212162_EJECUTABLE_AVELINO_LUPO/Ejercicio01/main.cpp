#include<iostream>
#include "stdfix.h"
#include "Rectangulo.h"
#include "Rectangulo.cpp"

using namespace std;

int main(){
    
    Rectangulo rectangulo(4,5);
    
    
    cout<<"Perimetro: "<< rectangulo.getPerimetro()<<endl;
    cout<<"Area: "<<rectangulo.getArea();
    
    return 0;
    system("pause");
}
