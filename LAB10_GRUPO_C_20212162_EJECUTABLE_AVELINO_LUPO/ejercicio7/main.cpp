#include <iostream>
#include "Lista.h"
# include "ctime"
using namespace std;


int main(){
    
    srand(time(NULL));
    unsigned t0, t1;
    Lista* a = NULL;
    for (int i = 0; i < 10000; i++){
        a->ingresarDato(a, 1+rand()%200);
    }
    // cout<<"\nNueva lista"<<endl;
    // a->printList(a);
    
    //  calcular el tiempo de ejecucion
    t0=clock();   
        a->ordenAscendente(a);
    t1 = clock();
    /*
    cout<<"\nLista ordenadada de forma Ascendente"<<endl;
    a->ordenAscendente(a);
    a->printList(a);
    cout<<"\nLista ordenadada de forma Descendente"<<endl;
    a->ordenDescendente(a);
    a->printList(a);
    */
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Tiempo de ejecucion del ordenamiento: " << time << endl;
 
    return 0;
    system("pause");
}
