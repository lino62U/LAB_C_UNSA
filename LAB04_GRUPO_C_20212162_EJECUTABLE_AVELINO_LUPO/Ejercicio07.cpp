// 7. Escribe un programa, que trabajando mediante funciones, presente un menú al usuario,
// mueva las columnas a la derecha o izquierda, asimismo mueva las filas para arriba o para abajo.

#include<iostream>
#include<time.h>

using namespace std;

const int size=5;

void mostrar(int matriz[size][size]){
    cout<<"\n\t...Matriz..."<<endl;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void menu(){
    cout<<"\n\t...MENU..."<<endl;
    cout<<"1. Mover Fila\n2. Mover Columna \n3. Salir\nOpcion?: ";
}

void moverFila(int matriz[size][size]){
    int fila, fila2;
    int tem[size];
    cout<<"Fila a mover: ";cin>>fila;
    cout<<"Mover a la fila: ";cin>>fila2;
    fila2--;
    fila--;
    for (int i = 0; i < size; i++)
        tem[i]=matriz[fila2][i];
    
    for (int i = 0; i < size; i++)
        matriz[fila2][i] = matriz[fila][i];
    
    for (int i = 0; i < size; i++)
        matriz[fila][i] = tem[i];

}

void moverColumna(int matriz[size][size]){
    int columna, columna2;
    int tem[size];
    cout<<"Columna a mover: ";cin>>columna;
    cout<<"Mover a la columna: ";cin>>columna2;
    columna2--;
    columna--;

    for (int i = 0; i < size; i++)
        tem[i]=matriz[i][columna2];

    for (int i = 0; i < size; i++)
        matriz[i][columna2] = matriz[i][columna];
    
    for (int i = 0; i < size; i++)
        matriz[i][columna] = tem[i];
    
}
int main(){

    int matriz[size][size];
    int opc;
    
    srand(time(NULL));
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matriz[i][j]=rand()%10;
        }
    }
    mostrar(matriz);
    while (true){
        do{
            menu();cin>>opc;
        } while (opc<1 || opc>3 && cout<<"Error"<<endl);
        if (opc==1){
            moverFila(matriz);
            mostrar(matriz);
        }
        else if(opc==2){
            moverColumna(matriz);
            mostrar(matriz);
        }
        else{break;}
        
    }
    
    return 0;
}
