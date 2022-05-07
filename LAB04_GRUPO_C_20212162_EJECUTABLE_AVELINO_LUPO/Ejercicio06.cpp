// Escribe un programa que pida nueve números enteros y los almacene 
// en una matriz 3x3. Calcula la suma de los números de cada fila y 
// mostrar por pantalla el número de fila con mayor suma.


#include<iostream>
using namespace std;
 
 
int main(){
    const int size1(3);
    int matriz[size1][size1];
    int fila1(0), fila2(0), fila3(0);
    for (int i = 0; i < size1; i++){
        for (int j = 0; j <size1; j++){
            cout<<"["<<i<<"]["<<j<<"]: ";cin>>matriz[i][j];
        }
    }
 
    cout<<"\n\t...Mostrar Matriz..."<<endl;
    for (int i = 0; i < size1; i++){
        for (int j = 0; j <size1; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
 
    for (int i = 0; i < size1; i++){
        for (int j = 0; j <size1; j++){
            if (i==0){
                fila1+= matriz[i][j];
            }
            else if(i==1){
                fila2+= matriz[i][j];
            }
            else{
                fila3+= matriz[i][j];
            }
        }
    }
 
    cout<<"\nLa fila con mayor suma es: ";
   
    if(fila1>fila2)
        if(fila1>fila3)
            cout<<fila1;
        else
            cout<<fila3;
    else
        if(fila2>fila3)
            cout<<fila2;
        else
            cout<<fila3;
   
    return 0;
       
}
