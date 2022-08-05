#ifndef ARBOLB_H
#define ARBOLB_H

template <class T>
class Nodo{
    public:
    T data;
    Nodo<T> *left = nullptr;
    Nodo<T> *right = nullptr;
};

template <class T>
class ArbolB{
    private:
        Nodo <T> *raiz = nullptr;
    public:
        ArbolB(){}
        ~ArbolB(){}
        void insertData(T);
        void insertAdyacent(Nodo <T>*, T);
        void printArbol();
        void priArbol(Nodo <T>* );
        void verArbol();
        void arbol(Nodo<T>*, int);
};

template <class T>
void ArbolB<T>::insertData(T a){
    Nodo<T> *newNodo = new Nodo<T>();
    newNodo->data = a;

    if(raiz==nullptr){
        raiz=newNodo;
    
    }else{

        insertAdyacent(raiz, a);
    }

}

template <class T>
void ArbolB<T>::insertAdyacent(Nodo<T> *nodo, T n){
   if(nodo->data > n){
        if(nodo->left!=nullptr)
            insertAdyacent(nodo->left, n);
        else{
            Nodo <T> *newNodo = new Nodo<T>();
            newNodo->data = n;
            nodo->left = newNodo;
        }
   }
    else if(nodo->data < n){
        if(nodo->right!=nullptr)
            insertAdyacent(nodo->right, n);
        else{
            Nodo <T> *newNodo = new Nodo<T>();
            newNodo->data = n;
            nodo->right = newNodo;
        }
        
    }

}
template <class T>
void ArbolB<T>::printArbol(){
    priArbol(raiz);
}
template <class T>
void ArbolB<T>::priArbol(Nodo <T> *raiz){
    if(raiz!=NULL)
     {
          std::cout << raiz->data <<" ";
          priArbol(raiz->left );
          priArbol(raiz->right);
     }
}

template <class T>
void ArbolB<T>::verArbol(){
    arbol(raiz,0);
}
template <class T>
void ArbolB<T>::arbol(Nodo<T> *aux, int n){
    if(aux==NULL)
          return;
     arbol(aux->right, n+1);

     for(int i=0; i<n; i++)
         std::cout<<"   ";

     std::cout<< aux->data <<"\n";

     arbol(aux->left, n+1);
}

#endif
