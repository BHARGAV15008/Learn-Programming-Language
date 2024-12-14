#include <iostream>
using namespace std;

// Base class;
class Base1 {
    protected:
        int base1int;
    public:
        void setInt1(int a) {
            base1int = a;
        }
};

// Base class;
class Base2 {
    protected:
        int base2int;
    public:
        void setInt2(int a) {
            base2int = a;
        }
};

// Derived class;
class Derived : public Base2, public Base1{
    public:
        void show (void) {
            cout << "The value of base 1 is " << base1int << endl;
            cout << "The value of base 2 is " << base2int << endl;
            cout << "The value of base 1 + base 2 is " << base1int + base2int << endl;
        }
};

int main (){
    Derived der;
    der.setInt1(34);
    der.setInt2(21);
    der.show();
    
    return 0;
}