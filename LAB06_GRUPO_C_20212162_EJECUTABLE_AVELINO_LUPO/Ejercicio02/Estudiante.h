#pragma once
#include <iostream>

using namespace std;

class Estudiante{

    private:
        int CUI;
        string nombreCompleto;
        int n1,n2,n3;
    public:
        Estudiante(){}
        Estudiante( int, string , int , int, int );
        ~Estudiante();
        int getCUI();
        string getPrimerNombre();
        float getPromedio();
};

