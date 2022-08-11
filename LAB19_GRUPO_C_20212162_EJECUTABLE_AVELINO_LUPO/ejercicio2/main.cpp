#include "iostream"
#include "vector"
#include "ctime"

using namespace std;

class FindOperator{
    private:
        vector<int> datos;        
    public:
        void addElementos(int aux){
            datos.push_back(aux);
        }

        void printDatos(){
            for(int i=0; i<datos.size();i++)
                cout<<datos[i]<<" ";        
            cout<<endl;
        }
        vector<float> operator()(int inicio, int final, int dato){            
            vector<float> aux;
            for (int i = inicio; i < final; i++){
                if(datos[i]==dato)
                    aux.push_back(i);
            }     
            return aux;
        }

        
};
int main(){
    int n =3;
    int inicio = 0;
    int final = 10;
    FindOperator array;
    
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        array.addElementos(1+rand()%+10);    
    
    cout<<"Datos del Array: \n\t";
    array.printDatos();
    cout<<endl;
    
    //Utilizar funtores
    vector<float> datos = array(inicio,final,n);
    cout<<"Buscar "<<n<<" desde la posicion "<<inicio<<" hasta "<<final-1<<endl;
    if(datos.size()>0){
        cout<<"Indices donde se ecuntra coincidencia: \n\t";
        for(int i=0; i<datos.size();i++)
            cout<<datos[i]<<" ";    
        cout<<endl;
    }else
        cout<<"No hay coincidencias con "<<n<<endl;
    
    
    
    return 0;

}