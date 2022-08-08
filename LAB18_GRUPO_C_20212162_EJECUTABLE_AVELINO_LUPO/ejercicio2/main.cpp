
#include "stdfix.h"
#include <iostream>

using namespace std;

template <int N>
struct fib{
    enum { value = fib<N-1>::value + fib<N-2>::value };
};
template <>
struct fib <0>{
    enum { value = 0 };
};
template <>
struct fib <1>{
    enum { value = 1};
};


int main(){
    
    const int numero = 5;
    cout <<"Fibonacci en posicicon "<<numero<< " es "<<fib<numero>::value<< " ";

    return 0;

}