#include "iostream"

using namespace std;

struct alumno{
	string nombre;
	char grupo;
	float nota [4];
	
};
typedef alumno Alumno;


void ingresarDatos (Alumno *& a, int n){
    for(int i=0;i<n;i++){
        cout<<"\nAlumno N"<<i+1<<":"<<endl;
		cout<<"\tNombre: ";getline(cin,a[i].nombre);
		cout<<"\tGrupo: ";cin>>a[i].grupo;
		for(int j=0; j<4; j++){
			cout<<"\t\tNota"<<j+1<<": ";cin>>a[i].nota[j];
            while(true){
                if(a[i].nota[j]>=0 && a[i].nota[j]<=20)
                    break;
                else{
                    cout<<"\tErrr Ingresando notas"<<endl;
			        cout<<"\t\tNota"<<j+1<<": ";cin>>a[i].nota[j];
                }
            }
            
        }
		cin.ignore();		
	}
}


void mostrarDatos(Alumno *& obj, int n){
    float pro=0;
	for(int i=0;i<n;i++){
        pro=0;
        cout<<"\nAlumno N"<<i+1<<":"<<endl;
		cout<<"\tNombre: "<<obj[i].nombre<<endl;
		cout<<"\tGrupo: "<<obj[i].grupo<<endl;
		for(int j=0;j<4;j++){
            switch (j){
                case 0:
                    pro+=(obj[i].nota[j]*0.15);
                    break;
                case 1:
                    pro+=(obj[i].nota[j]*0.2);
                    break;
                case 2:
                    pro+=(obj[i].nota[j]*0.25);
                    break;
                case 3:
                    pro+=(obj[i].nota[j]*0.4);
                    break;
            }
		}
		cout<<"\tPromedio: "<<pro<<endl;
		cout<<endl;
	}
}
int main(){
	
	int n;
	cout<<"Numero de alumnos: ";cin>>n;
	Alumno *obj = new Alumno [n];
	
	cin.ignore();
	ingresarDatos(obj, n);
	
	cout<<"MOSTRAR DATOS"<<endl;
    mostrarDatos(obj, n);
	
	return 0;
	system("pause");
}