#include <iostream>
using namespace std;

/* 
*****   Simple Example of the Friend Function   *****
// Forward declaration;
class Y;

class X {
    int data;
    public:
        void setValue (int value) {
            data = value;
        }
        
        // Making friend function;
        friend void add (X o1, Y o2);
};

class Y {
    int num;
    public:
        void setValue (int value) {
            num = value;
        }

        // Making friend function;
        friend void add (X o1, Y o2);
};

void add (X o1, Y o2) {
    cout << "Sum of two data of two objects : " << o1.data + o2.num << endl;
}
*/

class B;

class A {
    int data;
    public:
        void inValue (int value) {
            data = value;
        }
        
        void display(void) {
            cout << data << endl;
        }
        // Making friend function;
        friend void swapObData (A &, B &);
};

class B {
    int num;
    public:
        void inValue (int value) {
            num = value;
        }

        void display(void) {
            cout << num << endl;
        }

        // Making friend function;
        friend void swapObData (A &, B &);
};

void swapObData (A & o1, B & o2) {
    int temp = o1.data;
    o1.data = o2.num;
    o2.num = temp;
}

int main (){
    // // Variables, Object declaration;
    // X o1;
    // Y o2;
    // o1.setValue(25);
    // o2.setValue(24);
    // add (o1, o2);

    A o1;
    B o2;
    o1.inValue(25);
    o1.display();
    o2.inValue(24);
    o2.display();
    swapObData (o1, o2);
    o1.display();
    o2.display();
    
    return 0;
}