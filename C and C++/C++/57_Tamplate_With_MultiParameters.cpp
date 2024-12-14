#include <iostream>
using namespace std;

// Tamplate with multiple Parameters;
template <class T1, class T2>
class MyClass {
    public:
        T1 data1;
        T2 data2;

        MyClass (T1 a, T2 b) {
            data1 = a;
            data2 = b;
        }

        void display (void) {
            cout << "The value of Data 1: " << this->data1 << endl;
            cout << "The value of Data 2: " << this->data2 << endl;
        }
};

int main (){
    // MyClass<int, char> mcls (1, '5');
    MyClass<int, float> mcls (1, 5.8);
    mcls.display();

    
    return 0;
}