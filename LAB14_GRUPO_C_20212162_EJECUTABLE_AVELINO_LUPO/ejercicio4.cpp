#include "iostream"

using namespace std;

struct Prenda{
	string nombre;
	bool atributo;
};
struct Tienda{
	string codigo;
	Prenda producto;
	float precio;
	int cantidad;
};

void ingresarDatos(Tienda ** array , int n){
	for (int i = 0; i < n; i++){
		array[i]= new Tienda;
		cout<<"\nProducto N"<<i+1<<": "<<endl;
		cout<<"\tCodigo: ";getline(cin,array[i]->codigo);
		cout<<"\tNombre: ";getline(cin,array[i]->producto.nombre);
		cout<<"\tCantidad: ";cin>>array[i]->cantidad;
		cout<<"\tPrecio (S/): ";cin>>array[i]->precio;
		if(array[i]->cantidad==0)
			array[i]->producto.atributo=false;
		if(array[i]->cantidad>0)
			array[i]->producto.atributo=true;
		cin.ignore();
	}
}

void mostrarArray(Tienda ** array , int n){
	if(array!=nullptr){
		cout<<"\n\tCODIGO \t\tNOMBRE \t\tSTOCK \t\tPRECIO \t\tESTADO"<<endl;
		for (int i = 0; i < n; i++){
			cout<<"\t"<<array[i]->codigo<<"\t\t"<<array[i]->producto.nombre<<"\t\t"<<array[i]->cantidad<<"\t\t"<<array[i]->precio<<"\t\t";
			if(array[i]->producto.atributo)
				cout<<"Activo"<<endl;
			else
				cout<<"Inactivo"<<endl;
		}
		cout<<endl;
	}else
		cout<<"La Tienda se Encuentra Vacia"<<endl;
}


void menu(){
	cout<<"\n...Tienda..."<<endl;
	cout<<"\t1.Dar de ALTA un producto"<<endl;
	cout<<"\t2.Dar de BAJA un producto"<<endl;
	cout<<"\t3.Buscar un producto"<<endl;
	cout<<"\t4.Cambiar datos"<<endl;
	cout<<"\t5.Mostrar Productos"<<endl;
	cout<<"\t6.Salir"<<endl;
	cout<<"opc?: ";
}
void separador(){
	for (int i = 0; i < 100; i++)
		cout<<"*";
	cout<<endl;
}
void ingresarNuevoProducto(Tienda **array, int n, int n2){
	for(int i=n;i<n+n2;i++){
		array[i] = new Tienda;
		cout<<"\nProducto N"<<i+1<<": "<<endl;
		cout<<"\tCodigo: ";getline(cin,array[i]->codigo);
		cout<<"\tNombre: ";getline(cin,array[i]->producto.nombre);
		cout<<"\tCantidad: ";cin>>array[i]->cantidad;
		cout<<"\tPrecio (S/): ";cin>>array[i]->precio;
		if(array[i]->cantidad==0)
			array[i]->producto.atributo=false;
		if(array[i]->cantidad>0)
			array[i]->producto.atributo=true;
		
		cin.ignore();
	}
}
void swapear(Tienda** array,Tienda** array2, int n){
	for (int i = 0; i < n; i++){
		array2[i]= new Tienda;
		array2[i]->codigo= array[i]->codigo;
		array2[i]->producto.nombre = array[i]->producto.nombre;
		array2[i]->producto.atributo = array[i]->producto.atributo;
		array2[i]->cantidad = array[i]->cantidad;
		array2[i]->precio = array[i]->precio;
	}
}
Tienda* buscarProducto(Tienda **array, int n){
	int opc=0;
	Tienda *aux=nullptr;
	string name;
	while (opc>2||opc<1)	{
		cout<<"\tComo desea buscar"<<endl;
		cout<<"\t\t1.Nombre"<<endl;
		cout<<"\t\t2.Codigo"<<endl;
		cout<<"\tOpc: ";cin>>opc;
	}
	cin.ignore();
	if (opc==1){
		cout<<"\tNombre del producto: ";
	}else{
		cout<<"\tCodigo del producto: ";
	}
	getline(cin,name);

	for (int i = 0; i < n; i++){
		if(opc==1 && array[i]->producto.nombre==name)
			aux=array[i];
		if(opc==2 && array[i]->codigo==name)
			aux=array[i];
	}
	return aux;
}
void estado(Tienda **array, int n, bool aux2){
	Tienda *aux=buscarProducto(array,n);
	if(aux!=nullptr){	
		aux->producto.atributo=aux2;
		cout<<"Cambio guardado"<<endl;
	}else{
		cout<<"Producto No encontrado"<<endl;
	}
	cout<<endl;
}
Tienda** IngresarNuevo(Tienda **array, int n, int n2){
	Tienda **array2 = new Tienda*[n+n2];
	swapear(array,array2,n);
	ingresarNuevoProducto(array2,n,n2);
	return array2;
}
void mostrarProductoSOLO(Tienda *array){
    if(array!=nullptr){
        cout<<"\n\tCODIGO \t\tNOMBRE \t\tSTOCK \t\tPRECIO \t\tESTADO"<<endl;
        cout<<"\t"<<array->codigo<<"\t\t"<<array->producto.nombre<<"\t\t"<<array->cantidad<<"\t\t"<<array->precio<<"\t\t";
        if(array->producto.atributo)
            cout<<"Activo"<<endl;
        else
            cout<<"Inactivo"<<endl;
    }else{
        cout<<"\nProducto No encontrado"<<endl;
    }

	cout<<endl;
}
void setDatas(Tienda **array, int n){
    cout<<"\nBuscar producto a cambiar datos"<<endl;
	Tienda *aux=buscarProducto(array,n);
	int opc3=0;
	if(aux!=nullptr){
		while (opc3<1||opc3>4){
			cout<<"\n\tQue datos desea cambiar?: "<<endl;
			cout<<"\t\t1.Codigo"<<endl;
			cout<<"\t\t2.Nombre"<<endl;
			cout<<"\t\t3.Precio"<<endl;
			cout<<"\t\t4.Stock"<<endl;
			cout<<"\topc?: ";cin>>opc3;
		}

		switch (opc3){
			case 1:
				cout<<"\n\tNuevo Codigo: ";getline(cin,aux->codigo);
				break;
			case 2:
				cout<<"\n\tNuevo Nombre: ";getline(cin,aux->producto.nombre);
				break;
			case 3:
				cout<<"\n\tNuevo Precio: ";cin>>aux->precio;
				break;
			case 4:
				cout<<"\n\tNuevo Stock: ";cin>>aux->cantidad;
                if(aux->cantidad==0)
                    aux->producto.atributo=false;
				break;
		}
		cout<<"\n\tCambio Guardado"<<endl;
	}else
        cout<<"Producto NO ENCONTRADO"<<endl;
}

int main(){
	int n=0, n2;
	int opc=0;
	bool band=true;
	
	Tienda ** array = new Tienda*[n]; // fila
	
	separador();
	while (true){
		opc=0;
		while (opc<1||opc>6){
			menu();cin>>opc;
		}
		separador();
		cin.ignore();
		if(opc==1){
			int opc2;
			cout<<"\tQue desea realizar?"<<endl;
			cout<<"\t\t1.Ingresar Nuevo Producto"<<endl;
			cout<<"\t\t2.Cambiar estado"<<endl;
			cout<<"\topc?: ";cin>>opc2;
			if(opc2==1){
				cout<<"\n\tCuantos productos desea ingresar? ";cin>>n2;
				cin.ignore();
				if(band){
					ingresarDatos(array, n2);
					band=false;
				}
				else{
					array=IngresarNuevo(array,n,n2);
				}
				n+=n2;
			}else if(opc2==2){
				cout<<"\nBuscar producto para cambiar de estado"<<endl;
				estado(array,n, true);
			}
			else{
				cout<<"Opcion Incorrecta"<<endl;
			}
		}else if(opc==2){
            cout<<"\nBuscar producto para cambiar de estado"<<endl;
            estado(array,n,false);
		}else if(opc==3)
            mostrarProductoSOLO(buscarProducto(array,n));
		else if (opc==4)
            setDatas(array,n);
        else if(opc==5)
			mostrarArray(array,n);
        else if(opc==6)
            break;
		separador();
	}
	
	delete []array;

	return 0;
	system("pause");
}

