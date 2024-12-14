#include <iostream>
using namespace std;

// class base;
class Base1 {
    public:
        void greet (void) {
            cout << "Hello, Everyone 1!!! " << endl;
        }
};

// class base;
class Base2 {
    public:
        void greet (void) {
            cout << "Hello, Everyone 2!!! " << endl;
        }
};

// Derived class
class Derived : public Base1, public Base2 {
    public:
        // Solution of double greet function;
        void greet (void) {
            Base2::greet();
            Base1::greet();
        }
};

// // // // // // // // // // // // // // // // // // // // // // // //
class B {
    public:
        void say(void) {
            cout << "Hello 1" << endl;
        }
};

class D : public B {
    public:
    // Compiler overriding this parant class function by child class function;
        void say(void) {
            cout << "Hello 2" << endl;
        }
};

int main (){
    // Ambiguity 1
    Base1 bobj1;
    Base2 bobj2;
    Derived der;

    bobj1.greet();
    bobj2.greet();

    der.greet();  // without inside function gives error;


    // Ambiguity 2
    B b;
    b.say();

    D d;
    d.say(); // Gives error;
    
    return 0;
}