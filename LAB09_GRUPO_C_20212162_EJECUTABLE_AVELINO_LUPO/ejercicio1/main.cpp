#include "iostream"
#include "Numeros.h"
using namespace std;

int main(){

    Numeros <int> numbers(3,4,6);
    Numeros <float> numbers2(3.2,0.53,6);
    cout<<"El mayor de obj1 es: "<<numbers.getMayor()<<endl;
    cout<<"El menor de obj2 es: "<<numbers2.getMenor()<<endl;

    return 0;
    system("pause");
}