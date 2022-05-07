/*
  5. Implemente un programa que gestione los datos de stock de una tienda de abarrotes, 
     la información a recoger será: nombre del producto, precio, cantidad en stock. La 
     tienda dispone de 10 productos distintos. El programa debe ser capaz de:
    a. Dar de alta un producto nuevo.
    b. Buscar un producto por su nombre.
    c. Modificar el stock y precio de un producto dado.
 */

#include<iostream>
#include<string.h>
using namespace std;
 
struct Producto{
    string nombre;
    float precio;
    int stock;
};
 
void Ingresar_Producto(Producto *lista, int size){
    for (int i = 0; i < size; i++){
        cout<<"\nProducto N° "<<i+1<<": "<<endl;
        cout<<"\tNombre: ";getline(cin, lista[i].nombre);
        cout<<"\tPrecio: ";cin>>lista[i].precio;
        cout<<"\tStock: ";cin>>lista[i].stock;
        cin.ignore(100,'\n');
    }
}
void linea(){
    for (int i = 0; i < 100; i++){
        cout<<"*";
    }
    cout<<endl;
}
bool Buscar_Producto(Producto *lista, int size, string _nombre){
    for (int i = 0; i < size; i++){
        if (lista[i].nombre==_nombre){
            cout<<"\nProducto N° "<<i+1<<": "<<endl;
            cout<<"\tNombre: "<<lista[i].nombre<<endl;
            cout<<"\tPrecio: "<<lista[i].precio<<endl;
            cout<<"\tStock: "<<lista[i].stock<<endl;
            return true;
        }
    }
    return false;
}
void Modificar_Producto(Producto *lista, int size, string _nombre){
    float _precio;
    int _stock;
    cout<<"Nuevo precio: ";cin>>_precio;
    cout<<"Nuevo strock: ";cin>>_stock;
    for (int i = 0; i < size; i++){
        if (lista[i].nombre==_nombre){
            lista[i].precio=_precio;
            lista[i].stock=_stock;
            break;
            }
    }
   
}
void Venta_Producto(Producto *lista, int size, string _nombre){
    int n;
    cout<<"Cantidad: ";cin>>n;
    for (int i = 0; i < size; i++){
        if (lista[i].nombre==_nombre){
            lista[i].stock-=n;
            break;
        }
    }
   
}
void Menu(){
    cout<<"\n\n\t\t....MENU...."<<endl;
    cout<<"\t1. Dar de alta un producto nuevo. \n\t2. Buscar un producto por su nombre. \n\t3. Modificar el stock y precio de un producto dado.\n\t4. Salir"<<endl;
    cout<<"Opcion (1-4): ";
}
int main(){
    const int size=10;
    int opc;
    string _nombre;
    Producto productos[size];
 
    Ingresar_Producto(productos, size);
 
    //Mostrar_Productos(productos, size);
   
    while (true){
       
        do{
            Menu();cin>>opc;  
        } while (opc>4 || opc<1);
       
        switch (opc){
        case 1:
            cin.ignore(1000,'\n');
            cout<<"Nombre: ";getline(cin,_nombre);
           
            Venta_Producto(productos, size, _nombre);
            cout<<"Venta exitosa!"<<endl;
            linea();
            break;
        case 2:
            cin.ignore(1000,'\n');
            cout<<"Nombre: ";getline(cin,_nombre);
            if(Buscar_Producto(productos,size,_nombre)==true)
                cout<<"\nProducto encontrado"<<endl;
            else
                cout<<"\nProducto No encontrado"<<endl;
           
            linea();
            break;
        case 3:
            cin.ignore(1000,'\n');
            cout<<"Nombre: ";getline(cin,_nombre);
            Modificar_Producto(productos,size, _nombre);
            cout<<"Cambio realizado!"<<endl;
            linea();
            break;
        }
        if (opc==4){break;}
    }
   
    return 0;
}
