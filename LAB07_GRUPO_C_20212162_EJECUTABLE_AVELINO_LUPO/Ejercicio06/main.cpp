#include "iostream"
#include "Ave.h"
#include "Ganso.h"
#include "Pato.h"
#include "Gallina.h"

using namespace std;

int main(){

    const int size=3;

    Ave *ptrAnimales[size]={new Ganso("Anser anser"), new Pato("Anas platyrhynchos domesticus"), new Gallina("Gallus gallus domesticus")};

    for (int i = 0; i < size; i++){
        ptrAnimales[i]->imprimir();
    }
    

    return 0;
    system ("pause");
}
