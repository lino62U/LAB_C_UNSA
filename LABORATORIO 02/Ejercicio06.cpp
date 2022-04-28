/*
Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es
la sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula
sumando los dos anteriores a él.
*/
#include <iostream>
using namespace std;
void generateFibonacci(int n){
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    int a = 0;
    int b = 1;
    int c;
    cout << a << " " << b;
    for (int i = 3; i <= n; i++){
        c = a + b;
        cout << " " <<c;
        a = b;
        b = c;
    }
}
int main(){
    int num;
    cout << "Numeros de fibonacci a mostrar: ";cin >> num;
    generateFibonacci(num);
    return 0;
}
