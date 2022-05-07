//3. Hacer un array 5x3 que acepte números enteros ingresados por el usuario. 
//Al final, debe mostrar la suma de todos los números que estén en una fila par.


#include<iostream>
using namespace std;
 
 
 
int main(){
    const int size1(5), size2(3);
    int array[size1][size2], suma=0;
 
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            cout<<"["<<i<<"]["<<j<<"]: ";cin>>array[i][j];
        }
    }
 
    cout<<"\n\nMatriz 5x3: "<<endl;
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
   
    for (int i = 0; i < size1; i+=2){
        for (int j = 0; j < size2; j++){
            suma+=array[i][j];
        }
    }
    cout<<"La suma de todos los números que estén en una fila par: "<<suma<<endl;
 
    return 0;
}
