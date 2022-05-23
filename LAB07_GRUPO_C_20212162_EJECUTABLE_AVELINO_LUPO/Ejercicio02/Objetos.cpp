#include "Objetos.h"
#include "Color.h"
#include "Material.h"
#include "string"
using namespace std;

Objetos::Objetos(string _nombre, string _color, string _material){
    nombre =_nombre;
    RGB = _color;
    material=_material;
}
Objetos::~Objetos(){}

void Objetos::descripcion(){
    cout<<nombre<<" de color "<<RGB<<" y material de "<<material<<endl;
}
