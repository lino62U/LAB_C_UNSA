#include "iostream"
#include "Punto.h"
#include "Forma.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "string"


using namespace std;


struct Objeto{
     int mayor;
     Forma *ptrObj=NULL;
} mayorArea;

int main(){
    const size_t objetosCantidad=4;
    int mayor;
    Forma *ptrForma [objetosCantidad]={new Rectangulo(4,5), new Cuadrado (3), new Elipse (2,6), new Circulo (6)};
    string formas[objetosCantidad]={"Rectangulo", "Cuadrado","Elipse","Circulo"};
    
    for (int i = 0; i < objetosCantidad; i++){
        ptrForma[i]->setColor("Rojo");
        ptrForma[i]->setCoordenadas(5,2.3);
        ptrForma[i]->setForma(formas[i]);
        
    }
    
    // HALLAR LA FORMA CON MAYOR AREA
    mayorArea.mayor = ptrForma[0]->area();
    for(int i=1; i<objetosCantidad;i++){
         if(mayorArea.mayor<ptrForma[i]->area()){
              mayorArea.mayor = ptrForma[i]->area();
              mayorArea.ptrObj =ptrForma[i];
         }
    }
    
    mayorArea.ptrObj->imprimir();
    cout<<"\tArea: "<<mayorArea.ptrObj->area()<<endl;
    
    return 0;
    system("pause");
}
