#include "iostream"
#include "Color.h"
#include "Material.h"
#include "Objetos.h"

using namespace std;

int main(){
    Objetos objeto1("Mesa","Rojo","Vidrio");
    objeto1.descripcion();

    return 0;
    system("pause");
}
