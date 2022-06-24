#include "iostream"
#include "ctime"


using namespace std;

struct Informacion{
	string nombre;
	string fecha;
	
};
typedef Informacion Info;
void fechaCumple (Info *obj, int n){
	time_t now = time(0);
    tm *ltm = localtime(&now);
    int anio= 1900 + ltm->tm_year;
    int month= 1 + ltm->tm_mon;
    int day = ltm->tm_mday;;

	int mes = 1 + ltm->tm_mon;
	int mes2;	
	string mesCumple;
	
	for(int i=0;i<n;i++){
		mesCumple = (obj[i].fecha).substr(3, 2) ;
		mes2 = stoi(mesCumple);
		if(mes2 == mes)
			cout<<"\nHoy "<<day<<"-"<<month<<"-"<<anio<<" es cumpleanios de "<<obj[i].nombre<<endl;
	}
	
}

void IngresarDatos(Info *&a, int n){
    for(int i=0;i<n;i++){
        cout<<"\nPersona N° "<<i+1<<endl;
		cout<<"\tNombre: ";getline(cin,a[i].nombre);
		cout<<"\tCumpleanios (dd-mm-yyyy): ";getline(cin,a[i].fecha);
	}
}
void mostrarDatos(Info *&a, int n){
    for(int i=0;i<n;i++){
        cout<<"\nPersona N° "<<i+1<<endl;
		cout<<"\tNombre: "<<a[i].nombre<<endl;
		cout<<"\tFecha: "<<a[i].fecha;		
		cout<<endl;
	}
}
int main(){
	int n;
	string _name;
	string _fecha;
	cout<<"\nNumero de companieros: ";cin>>n;
	Info *arreglo = new Info [n];
	cin.ignore();
    IngresarDatos(arreglo,n);
	
	fechaCumple(arreglo, n);

	return 0;
	system("pause");
}
