#include "iostream"
using namespace std;


template< int B,int E>
struct Potencia{
    enum { value = B*Potencia<B,E-1>::value };
};
 
template<int B > 
struct Potencia<B,0>{
    enum { value = 1 };
};
 
int main()
{
    const int base = 2;
    const int exponente = 5;
    cout << "La potencia de "<<base<<" elevado a "<<exponente<<" es: "<<Potencia<base,exponente>::value << endl;
    return 0;
}
