#ifndef CALCULATOR_H
#define CALCULATOR_H
template <typename T>
class Calculator{
private:
	T a;
	T b;
public:
	Calculator(){}
	Calculator(T _a,T _b):a(_a),b(_b){}
	~Calculator(){}
	T getSuma();
	T getResta();
	T getMultiplicacion();
	T getDivision();
	T getA();
	T getB();
};

template <typename T>
T Calculator<T>::getA(){
	return this->a;
}

template <typename T>
T Calculator<T>::getB(){
	return this->b;
}

template <typename T>
T Calculator<T>::getSuma(){
	return a+b;
}

template <typename T>
T Calculator<T>::getResta(){
	return a-b;
}

template <typename T>
T Calculator<T>::getMultiplicacion(){
	return a*b;
}

template <typename T>
T Calculator<T>::getDivision(){
	return a/b;
}

#endif
