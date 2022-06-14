#include "iostream"
#include "Correo.h"


using namespace std;

int main(){
    string names[5]={"lupo","roque","martinez", "maldonado","mayorga"};
    char caracteres[5]={'a','b','c','d','e'};
    Correo <char, string> *correos[5];

    for (int i = 0; i < 5; i++){
        correos [i] = new Correo <char, string> (caracteres[i] ,names[i]);
    }
    for (int i = 0; i < 5; i++){
        cout<<"\nCorreo numero "<<i+1<<": "<<correos [i]->getCorreo()<<endl;
    }

    return 0;
    system ("pause");
}
