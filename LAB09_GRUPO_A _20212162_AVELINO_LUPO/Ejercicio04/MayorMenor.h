#pragma once
template <class P>
class MayorMenor{
    private:
        P array[5];
    public:
        MayorMenor(P []);
        ~MayorMenor();
        P getMayor();
        P getMenor();
};

template <class P>
MayorMenor<P>::MayorMenor(P ar[]){
    for (int i = 0; i < 5; i++){
        array[i]=ar[i];
    }
}

template <class P>
MayorMenor<P>::~MayorMenor(){}

template <class P>
P MayorMenor<P>::getMayor(){
    P mayor=array[0];
    for(int i=1; i<5;i++){
        if(array[i]>mayor){
            mayor =array[i];
        }
    }
    return mayor;
}

template <class P>
P MayorMenor<P>::getMenor(){
    P menor=array[0];
    for(int i=1; i<5;i++){
        if(array[i]<menor){
            menor=array[i];
        }
    }
    return menor;
}
