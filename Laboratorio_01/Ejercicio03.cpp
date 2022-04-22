#include <iostream> 
#include <string.h>
using namespace std;

/*
3. Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de
cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el
formato de salida debe de estar en AM o PM según corresponda).

*/
string amPM (int hora){
    if(hora>11)
        return "pm";
    else 
        return "am";
}

int main(){
    string hora;
    string min;
    int h, m, nueva;
    int horaaumentar, minutoaumentar;
    cout<<"Ingrese la hora en formato HH:MM? ";getline(cin,hora);
    cout<<"Minutos a agregar: ";getline(cin, min);
    
    h=stoi(hora.substr(0,2));  //TRANSFORMA EL STRING EN ENTERO
    m=stoi(hora.substr(3,2));

    // MANO AQUI PONES EL CODIGO DE AUMENTAR LA HORA
    if((m + stoi(min))>60){
        
        if(stoi(min)>60){
            horaaumentar=stoi(min)/60;
            minutoaumentar=stoi(min)%60;
            h=h+horaaumentar;
            m=m+minutoaumentar;
            cout<<"Nueva hora: "<<h<<":"<<m<<endl;

        }  
    }
    else{
        cout<<"Nueva hora: "<<hora.substr(0,2)<<":"<<stoi(hora.substr(3,2))+stoi(min)<<endl;
    }

    
}
