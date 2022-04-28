#include<iostream>
using namespace std;
    bool division(int n){
    bool band=true;
    for (int i = 2; i < n; i++){
        if(n%i==0){band=false;}
    }
    return band;
}
int main(){
    int sum(0), c(0), i(2);
    do{
        if(division(i)==true){
            cout<<i<<" ";
            c++;
        }
        i++;
    } while (c<50);
    return 0;
}
