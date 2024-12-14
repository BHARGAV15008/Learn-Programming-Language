#include <iostream>
using namespace std;

class Number {
    int a;
    public:
        Number () {}

        Number (int num) {
            a = num;
        }

        // Make constructor to make copy constructors;
        // When there is no copy constructor found then compiler make it own;
        Number (Number &obj) {
            cout << "This is Copy constructors....." << endl;
            a = obj.a;
        }

        void displayNumber (void) {
            cout << "The number for this object is " << a << endl;
        }
};

int main (){
    Number num2, num3(45);

    num2 = Number (5);
    num2.displayNumber();

    // To make copy of any object;
    // Which works like exactly same as their copy constructor;
    // Copy constructor is invoked;
    Number num1(num3);
    num1.displayNumber();

    Number num = num2;   // Here also copy constructor invoked;
    num.displayNumber();
    
    return 0;
}