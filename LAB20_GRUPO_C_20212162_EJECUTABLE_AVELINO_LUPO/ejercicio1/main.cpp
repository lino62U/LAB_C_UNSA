#include "iostream"
#include <memory>

using namespace std;

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
    double* d = new double(1.0);
    Point* pt = new Point(1.0, 2.0);

    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);
    
    pt->X(3.0);
    pt->Y(3.0);
    
    delete d;
    delete pt;
}