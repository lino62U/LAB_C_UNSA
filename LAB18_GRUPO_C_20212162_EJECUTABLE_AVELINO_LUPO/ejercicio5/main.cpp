#include <iostream>
 
using namespace std;
 
template<int N>
struct decimalBinario{
	enum {value = N%2+decimalBinario<N/2>::value*10};
};

template <>
struct decimalBinario<1>{
	enum{ value = 1};
};

template <>
struct decimalBinario<0>{
	enum{ value = 0};
};
 
int main(){
    const int numero= 13;

	cout<<"El numero "<<numero<<" en binario es: "<<decimalBinario<numero>::value<<endl;
	return 0;
}