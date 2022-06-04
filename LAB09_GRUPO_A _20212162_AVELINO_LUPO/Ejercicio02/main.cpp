#include "Operaciones.h"
#include "iostream"

using namespace std;


int main(){
   Operaciones <int, float> op1(9,4.5);
   cout<<"Suma: "<<op1.getSuma()<<endl;
   cout<<"Resta: "<<op1.getResta()<<endl;
   cout<<"Division: "<<op1.getDivision()<<endl;
   cout<<"Multiplicacion: "<<op1.getMultiplicacion()<<endl;

   return 0;
   system ("pause");

}
