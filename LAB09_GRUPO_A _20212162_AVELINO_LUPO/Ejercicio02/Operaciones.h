#pragma once

template< class P, class T>
class Operaciones{
    private:
        P num1;
        T num2;
    public:
        Operaciones(P,T);
        ~Operaciones();
        T getSuma();
        T getResta();
        T getMultiplicacion();
        T getDivision();
};
template <class P, class T>
Operaciones<P, T>::Operaciones(P n1,T n2){
    num1 =n1;
    num2 =n2;
}
template <class P, class T>
Operaciones<P, T>::~Operaciones(){}

// obtener suma
template <class P, class T>
T Operaciones<P, T>::getSuma(){
   return num1+num2;
}
// obtener resta
template <class P, class T>
T Operaciones<P, T>::getResta(){
   return num1-num2;
}
//obtener division
template <class P, class T>
T Operaciones<P, T>::getDivision(){
   return num1/num2;
}
//obtener multiplicacion
template <class P, class T>
T Operaciones<P, T>::getMultiplicacion(){
   return num1*num2;
}