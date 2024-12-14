#include <iostream>
using namespace std;

// Base class;
class Base {
    int data1;  // It is Private data not inheritable;
    public:
        int data2;
        void setData (void);
        int getData1 (void);
        int getData2 (void);

};

// Derived class;
class Derived: public Base {
    int data3;
    public:
        void process (void);
        void display (void);
};

void Base :: setData (void) {
    data1 = 10;
    data2 = 20;
}

int Base :: getData1 (void) {
    return data1;
}

int Base :: getData2 (void) {
    return data2;
}

void Derived :: process(void) {
    data3 = data2 * getData1();
}

void Derived :: display (void) {
    cout << "The value of data 1 is " << getData1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

int main (){
    Derived der;
    der.setData();
    der.process();
    der.display();
    
    return 0;
}