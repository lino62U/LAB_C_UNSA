#pragma once
#include "iostream"

using namespace std;

template< class P>
class Numeros{
    private:
        P num1,num2,num3;
        P mayor, menor;
    public:
        Numeros(P,P,P);
        ~Numeros();
        P getMayor();
        P getMenor();
};

template <class P>
Numeros<P>::Numeros(P n1,P n2,P n3){
    num1=n1;
    num2=n2;
    num3=n3;
}
template <class P>
Numeros<P>::~Numeros(){}

template <class P>
P Numeros<P>::getMayor(){
    if(num1 > num2)
       if(num2 > num3)
          return num1;
       else
          return num3;
    else if(num2 > num3)
            return num2;
         else
            return num3;
}
template <class P>
P Numeros<P>::getMenor(){
    if(num1 < num2)
       if(num2 < num3)
          return num1;
       else
          return num3;
    else if(num2 < num3)
            return num2;
         else
            return num3;
}