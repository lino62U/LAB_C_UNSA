
#include "stdfix.h"
#include <iostream>

using namespace std;

template <int N>
struct Sum{
    enum { value = N % 10 + Sum <N / 10>::value };
};

template <>
struct Sum <0>{
    enum { value = 0 };
};

int main(){

    const int numero =2333;
    int result = Sum<numero>::value;
    cout<<"Suma de digitos de "<<numero<<" es "<< result<<endl;
    return 0;

}