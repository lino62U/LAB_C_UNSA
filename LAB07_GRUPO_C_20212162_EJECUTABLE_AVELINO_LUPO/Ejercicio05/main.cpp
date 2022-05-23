#include "iostream"
#include "operacionBase.h"
#include "operacionFactorial.h"


using namespace std;

int main(){
    operacionFactorial fac1(5);

    cout<<"Factorial: "<<fac1.devolverFactorial()<<endl;

    return 0;
    system("pause");
}
