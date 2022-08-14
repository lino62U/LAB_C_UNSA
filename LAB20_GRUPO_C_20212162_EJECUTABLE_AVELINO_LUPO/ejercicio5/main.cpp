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

    // share pointer
    std::shared_ptr <double> d2 = std::move(d);
    std::shared_ptr <Point> pt2 = std::move(pt);
    
    // weak pointer
    std::weak_ptr<double> d3 = d2;
    std::weak_ptr <Point> pt3 = pt2;

    //desbloquear weak pointer
    std::shared_ptr<double> d4 = d3.lock();
    std::shared_ptr <Point> pt4 = pt3.lock();


    // Solo prueba
    cout<<"d2: "<<*d2<<"   d4: "<<*d4<<endl;
    cout<<"Print pt2: ";
    pt2->print();
    cout<<"Print pt4: ";
    pt4->print();

    return 0;

}