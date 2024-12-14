#include <iostream>
using namespace std;

// class Complex {
//     int a, b;
//     public:
//         Complex (int x, int y); // Constructor declaration;
//         void printNumber(void) {
//             cout << "The number is " << a << " + " << b << "i" << endl;
//         }
// };

// Complex :: Complex(int x, int y) {  // Parameterized constructor;
//     a = x; 
//     b = y;
// }

class Point {
    int a, b;
    public:
        Point (int x, int y) {
            a = x;
            b = y;
        }

        void displayPoint (void) {
            cout << "The point is (" << a << ", " << b << ")" << endl;
        }
};

int main (){
    // Complex ic(6, 8); // Implicit call;
    // ic.printNumber();

    // Complex ec = Complex(9, 9); // Explicit call;
    // ec.printNumber();
    

    Point p = Point(1, 3);
    Point q = Point(2, 5);

    p.displayPoint();
    q.displayPoint();

    return 0;
}