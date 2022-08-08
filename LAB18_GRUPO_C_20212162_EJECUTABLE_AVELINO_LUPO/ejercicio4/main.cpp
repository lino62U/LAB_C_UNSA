#include <iostream>
using namespace std;

template<int N>
struct Hexadecimal{
    enum {value = (N%16<=9) ? (48+N%16) : (55+N%16), value2 = value + Hexadecimal<N/16>::value*100};
};

template<>
struct Hexadecimal<0>
{
    enum{value = 0};
};


string ascciConverse(int n){
    string resultado="";
    if(n != 0){
        for (int i = 0; i < to_string(n).length(); i+=2)
            resultado += char(stoi(to_string(n).substr(i,2)));

        return resultado;
    }
    return "0";
    
}
int main(){

    int const numero = 171;
    cout<<"El numero "<<numero<<" en hexadecimal es: "<<ascciConverse(Hexadecimal<numero>::value2)<<endl;
    return 0;
}