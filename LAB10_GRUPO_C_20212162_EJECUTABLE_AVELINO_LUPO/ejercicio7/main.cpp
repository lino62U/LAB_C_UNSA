#include <iostream>
#include "Lista.h"
# include "ctime"
using namespace std;


int main(){
    
    srand(time(NULL));
    unsigned t0, t1;
    Lista* a = NULL;
    for (int i = 0; i < 10000; i++){
        a->ingresarDato(a, 1+rand()%100);
    }
    cout<<"\nNueva lista"<<endl;
    a->printList(a);
    t0=clock();   
         a->quickSort(a);

    t1 = clock();
    cout<<"\n\nNueva lista ordenadada"<<endl;
    a->printList(a);
    
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time : " << time << endl;
 
    return 0;
    system("pause");
}
