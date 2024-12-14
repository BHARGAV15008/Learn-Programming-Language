#include <iostream>
using namespace std;

// Create Complex class for performing constructor overloading;
class Complex {
    int a, b;
    public:
    // We create here constructor overloading;
        Complex() {
            a = 0;
            b = 0;
        }

        Complex (int x, int y) {
            a = x;
            b = y;
        }

        // Now create constructor with default arguments;
        Complex (int x, int y = 9){
            a = x;
            b = y;
        }

        void printNumber(void) {
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};

int main (){
    Complex c1;
    c1.printNumber();

    Complex c2(4);
    c2.printNumber();

    Complex c3(3, 4);
    c3.printNumber();
    
    return 0;
}