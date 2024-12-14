/*
-----   Constructor in Inheritance   -----
    * We can use constructors in derived classes in C++;
    * If base class constructor does not have any arguments, there is no need of any constructor in derived class;
    * But if there are one or more arguments in the base class constructor,
    * Derive class need to pass arguments to the base class constructor;
    * If both base and derived classes have constructors, base class constructor is executed first;
    * In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration;
    * In multilevel inheritance, the constructors are executed in the order of inheritance;
    * The constructor of the derived class received all the arguments at once and then will pass the calls to the respectively base classes;
    * All the arguments in the derived class constructor are in order;
    * Constructor first invoked if it is virtual base class the non-virtual base class;
    * But multiple virtual base class invoked in order;
*/

#include <iostream>
using namespace std;

class Base1 {
    int data1;
    public:
        Base1 (int i1) {
            data1 = i1;
            cout << "Base1 class constructor..... " << endl;
        }

        void printData1 (void) {
            cout << "Your data1 is " << data1 << endl;
        }
};

class Base2 {
    int data2;
    public:
        Base2 (int i2) {
            data2 = i2;
            cout << "Base2 class constructor..... " << endl;
        }

        void printData2 (void) {
            cout << "Your data2 is " << data2 << endl;
        }
};


class Derived1 : public Base1, public Base2 {
    int derived1, derived2;
    public:
        Derived1 (int a, int b, int c, int d) : Base1(a), Base2(b) {
            derived1 = c;
            derived2 = d;
            cout << "Derived1 class Constructor....." << endl;
        }

        void printData11(void) {
            cout << "Your derived 1 and derived 2 data is " << derived1 << ", " << derived2 << endl;
        }
};

class Derived2 : public Derived1 {
    int derived3;
    public:
        Derived2 (int x, int y, int z, int a, int b) : Derived1(a, y, z, a) {
            derived3 = b;
            cout << "Derived2 class Constructor....." << endl;
        }

        void printData12() {
            cout << "derived3 Value is " << derived3 << endl;
        }
};

int main (){
    // Derived1 der(1, 2, 3, 4);
    // der.printData1();
    // der.printData2();
    // der.printData11();
    
    Derived2 der1(1, 2, 3, 4, 5);
    der1.printData1();
    der1.printData2();
    der1.printData11();
    der1.printData12();

    return 0;
}