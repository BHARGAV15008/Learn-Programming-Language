#include <iostream>
using namespace std;
/*
-----   Initialization list   -----
    * Syntax:
        constructor (Argument-list) : initialization-section {
            // other codes and assignments;
        }
    
    * Perform for fast operations;
    * Maintain order;
*/
class Test {
    int a, b;
    public:
        // Test (int x, int y) : a(x), b(y)
        // Test (int x, int y) : a(x), b(2 * y)
        // Test (int x, int y) : a(x), b(i + y)
        // Test (int x, int y) : a(x), b(a + y)
        // Test (int x, int y) : a(x), b(2 + a + y)
        Test (int x, int y) : a(x) {
            b = ય;
            cout << "We are in constructor....." << endl;
            cout << "The value of a : " << a << endl;
            cout << "The value of b : " << b << endl;
        }
};

int main (){
    Test t(4, 5);
    
    return 0;
}