/*
1. Sumar todos los enteros pares desde 2 hasta 100.
*/

#include<iostream>
using namespace std;
int main(){
  int sum=0;
  for (int i = 2; i <= 100; sum+=(i++)){}
  cout<<"La suma de 2 hasta 100 es: "<<sum<<endl;
  return 0;
}
