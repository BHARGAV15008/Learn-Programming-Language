#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;
    public:
        void setData(int a, int b) {
            real = a;
            imaginary = b;
        }

        void getData (void) {
            cout << "The value of real: " << real << endl;;
            cout << "The value of imaginary: " << imaginary << endl;
            cout << "The complex number: " << real << " + " << imaginary << "i" << endl;
        }
};

int main (){
    Complex c1;
    Complex *ptr = &c1;
    c1.setData(12, 15);
    c1.getData();

    cout << endl;
    // Dereference pointer
    (*ptr).setData(12, 15);
    (*ptr).getData();

    cout << endl;
    // Dereference pointer
    Complex *ptrs = new Complex;
    (*ptrs).setData(12, 15);
    (*ptrs).getData();

    cout << endl;
    // Using arrow pointer;
    // Use to dereference pointer and fetch data of the pointer;
    ptrs->setData(12, 15);
    ptrs->getData();

    cout << endl;
    // Array of objects;
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 4);
    ptr1->getData();
    
    return 0;
}