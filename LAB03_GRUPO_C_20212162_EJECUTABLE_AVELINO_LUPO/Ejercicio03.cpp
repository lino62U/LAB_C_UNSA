/*
3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días.
*/



 #include <iostream>
 #include<string.h>
 
 using namespace std;
 
 int RetornoDias(int a, int anio){
     if(a== 1 || a==3 || a==5 || a==7|| a==8|| a==10 || a==12){
         return 31;
         }
     else if(a==2){
        if(a%400==0 || (a%4==0 && a%100!=0))
            return 29;
        else
            return 28;
     }
     else{
         return 30;
     }
 }
 void reparticion(string &fecha, int &d, int &m, int &y){
     d=stoi(fecha.substr(0,2));
     m=stoi(fecha.substr(3,2));
     y=stoi(fecha.substr(6,4));
 }
 void diaMes(int &d, int &m, int &yA, int &dA, int &mA, int &mN,  int &dN){
     d=RetornoDias(mN, yA)-dN;
     d=d+dA;
     if(RetornoDias(mA,yA)<d){
         m++;
         d=d-RetornoDias(mA,yA)-1;
     }
 }
 int main(void) {
    int anio,mes,dia;
    int anioActual,mesActual,diaActual;
    int anioNaci,mesNaci,diaNaci;
 
    string fechaActual;
    string fechaNacimiento;
 
    cout<<"Fecha actual formatao 'DD/MM/YYYY': ";getline(cin,fechaActual);
    cout<<"Fecha nacimiento formatao 'DD/MM/YYYY': ";getline(cin,fechaNacimiento);
 
    reparticion(fechaActual,diaActual,mesActual,anioActual);
    reparticion(fechaNacimiento,diaNaci,mesNaci,anioNaci);
 
     if(mesActual<mesNaci){
         anio=anioActual-anioNaci-1;
         mes=mesActual-1+(12-mesNaci);
         diaMes(dia,mes,anioActual,diaActual, mesActual, mesNaci,diaNaci);
 
    }
    else{
         anio=anioActual-anioNaci;
         mes=mesActual-mesNaci-1;
         diaMes(dia,mes,anioActual,diaActual,mesActual,mesNaci,diaNaci);
    }
     cout<<"\nUsted tiene "<<anio<<" año(s) "<<mes<<" mes(es) "<<dia<<" dia(s)"<<endl;
 
     return 0;
}
