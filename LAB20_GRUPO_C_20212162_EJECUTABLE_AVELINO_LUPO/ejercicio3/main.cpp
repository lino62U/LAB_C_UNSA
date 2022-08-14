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

int main(){
    std::shared_ptr<double> d = std::make_shared<double> (3.4);

    C1 c1(d);
    C2 c2(d);
    
    cout<<"Numero de vece compartido: "<<d.use_count()<<endl;
    
    return 0;
}
