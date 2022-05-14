#include<iostream>
using namespace std;
 
 
void mostrar(float *&vector, int n){
    for (int i = 0; i < n; i++){
        cout<<*(vector+i)<<" ";
    }
   
}
void generarElemntos(float *&vector, int n){
    for (int i = 0; i < n; i++){
        *(vector+i)=rand()%3;
    }
}
 
int productoPunto(float *&vector1,float *&vector2, int n){
    int suma=0;
    for (int i = 0; i < n; i++){
        suma+=(*(vector1+i)* *(vector2+i));
    }
    return suma;
}
int main(){
    const int size=1000000;
    int n;
    srand(time(NULL));
    for (int i = 0; i <size; i++){
        n=rand()%10;
        float *vector1=new float[n];
        float *vector2=new float[n];
       
        generarElemntos(vector1, n);
        generarElemntos(vector2, n);
        cout<<"Vector 1: ";
        mostrar(vector1, n);
        cout<<"\nVector 2: ";
        mostrar(vector2, n);
 
        cout<<"\nEl producto punto es: "<<productoPunto(vector1,vector2,n)<<"\n"<<endl;  
        delete []vector1;  
        delete []vector2;
    }
     
    return 0;
}
