#include "iostream"

using namespace std;

struct Jugador{
    string nombre;
    int edad;
    float talla;

};

typedef Jugador arreglo;

int jugadores =10;

void PedirDatos(arreglo a[]){
    string str;
    for (int i = 0; i < jugadores; i++){
        cout<<"\nJugador N"<<i+1<<endl;
        cout<<"\tNombre: ";getline(cin,a[i].nombre);
        cout<<"\tEdad: ";cin>>a[i].edad;
        cout<<"\tTalla (m): ";cin>>a[i].talla;
        cin.ignore();
    }
}

bool comparar(int *edad, float *talla){
    
    if(*edad<20 && *talla>1.7){
        return true;
    }
    return false;
}
int main(){
    arreglo obj[jugadores];
    
    PedirDatos(obj);
    cout<<"\nJugadores Menores a 20 años y mayores a 1.7m de estatura"<<endl;
    for (int i = 0; i < jugadores; i++){
        if(comparar(&obj[i].edad,&obj[i].talla)){
            cout<<"\nJugador N"<<i+1<<endl;
            cout<<"\tNombre: "<<obj[i].nombre<<endl;        
            cout<<"\tEdad: "<<obj[i].edad<<endl;
            cout<<"\tTalla (m): "<<obj[i].talla<<endl;
        }
    }

    return 0;
    system("pause");
    
}   