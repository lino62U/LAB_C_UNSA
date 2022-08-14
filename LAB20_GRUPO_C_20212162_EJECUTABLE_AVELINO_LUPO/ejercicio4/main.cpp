#include "iostream"
#include <memory>

using namespace std;
class C1
{
    private:
        std::shared_ptr<double> d;
    public:
        C1(std::shared_ptr<double> value) : d(value) {}
        virtual ~C1() { cout << "\nC1 destructor\n"; }
        void print() const { cout << "Valor " << *d; }
};
class C2
{
    private:
        std::shared_ptr<double> d;
    public:
        C2(std::shared_ptr<double> value) : d(value) {}
        virtual ~C2() { cout << "\nC2 destructor\n"; }
        void print() const { cout << "Valor " << *d; }
};
class Point
{
    private:
        double x, y;
    public:
        Point(double _x, double _y) : x(_x), y(_y) {};
        ~Point(){}
        void print(){std::cout << "(" << x << ", " << y << ")\n";}
        void X(double _x){x=_x;}
        void Y(double _y){y=_y;}
};
int main(){
    
    std::unique_ptr<double> d = std::make_unique<double>(1.0);
    std::unique_ptr<Point> pt = std::make_unique<Point>(1.0, 2.0);
    
    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);
    
    pt->X(3.0);
    pt->Y(3.0);

    std::shared_ptr <double> d2 = std::move(d);
    std::shared_ptr <Point> pt2 = std::move(pt);

    //Solo prueba
    cout<<"d2: "<<*d2<<endl;
    pt2->print();

}