/*
-----   Friend Functions   -----
    * Not in the scope of the class;
    * Friend Function allowed to access classes private members;
    * This function cant be call by using objects of the class;
    * Can be Invoke without helps of any objects or class;
    * Usually can contains objectsas arguments;
    * No matter ware you want to declare friend function (private or public);
*/
#include <iostream>
using namespace std;

// Syntax of complex number: 
// 1 + 4i
// 4 + 5i
// Add of above number is: 5 + 9i
class Complex {
    int a, b;
    public: 
        friend Complex sumComplex (Complex o1, Complex o2);  // Making friend functions for accessing private data;

        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }

        void printNumber(void) {
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};

Complex sumComplex (Complex o1, Complex o2) {
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main (){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(4, 5);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    
    return 0;
}