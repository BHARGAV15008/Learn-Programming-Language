#include <iostream>
using namespace std;

// Forward declaration;
class Complex;

class Calculator {
    public:
        int add (int a, int b) {
            return (a + b);
        }

        int sumRealComplex (Complex o1, Complex o2);
        int sumCompComplex (Complex o1, Complex o2);
};

class Complex {
    int a, b;
    public:
        // // By individual we declared friends;
        // friend int Calculator :: sumRealComplex (Complex o1, Complex o2);  // Friend function of diffrent class resolution;
        // friend int Calculator :: sumCompComplex (Complex o1, Complex o2);  // Friend function of diffrent class resolution;

        // Make it class as function instead of individual;
        friend class Calculator;

        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }

        void printNumber(void) {
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};

int Calculator :: sumRealComplex (Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex (Complex o1, Complex o2) {
    return (o1.b + o2.b);
}

int main (){
    Complex o1, o2;
    Calculator c1;
    int res;

    o1.setNumber(2, 5);
    o2.setNumber(3, 6);

    res = c1.sumRealComplex(o1, o2);

    cout << "result is " << res << endl;
    
    return 0;
}