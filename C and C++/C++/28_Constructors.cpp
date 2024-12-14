/*
-----   Constructors   -----
    * It should be declared in the public section of the class;
    * They are automatically invoked whenever the object is created;
    * They cannot return value and return types;
    * It can have defualt value;
    * We cannot refer to their address;
*/

#include <iostream>
using namespace std;

class Complex {
    int a, b;
    public:
        // Creating constructor;
        // It is special member function which declared as same name as class;
        // It is used to initialised of the data of the class or object of the class;
        // Constructor is function which automatically invoked whenever object creation;
        Complex (void); // Constructor declaration;
        void printNumber(void) {
            cout << "The number a and b is respectively " << a << " " << b << endl;
        }
};

Complex :: Complex() {  // Default constructor;
    a = 10; 
    b = 0220;
}

int main (){
    Complex c;
    c.printNumber();
    
    return 0;
}