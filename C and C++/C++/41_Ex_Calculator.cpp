#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
    protected:
        float a, b;
    public:
        void SetNumberSim(void){
            cout << "Enter your Number 1 and Number 2: ";
            cin >> a >> b;
        }

        void basicOperation (void) {
            cout << "Addition of the given number (a + b): (<< a+b)" << a+b << endl;

            cout << "Subtraction of the given number (a - b): " << a-b << endl;

            cout << "Multiplication of the given number (a * b): " << a*b << endl;

            cout << "Division of the given number (a / b): " << a/b << endl;

            cout << "Modulo of the given number (a % b): " << int(a) % int(b) << endl;
        }
};

class ScientificCalculator{
    protected:
        float a, b;
    public:
        void SetNumberSci(void){
            cout << "Enter your Number 1 and Number 2: ";
            cin >> a >> b;
        }

        void advancedOperation (void) {
            cout << "The value of (cos(a)) :  " << cos(a) << endl;
            cout << "The value of (tan(a)) :  " << tan(a) << endl;
            cout << "The value of (sin(a)) :  " << sin(a) << endl;
            cout << "The value of (pow(a, 2)) :  " << pow(a, 2) << endl;
            cout << "The value of (sqrt(a)) :  " << sqrt(a) << endl;
        }
};

class HybridCalculator : public ScientificCalculator, public Calculator {

};

int main (){
    HybridCalculator hcls;
    hcls.SetNumberSim();
    hcls.SetNumberSci();
    hcls.basicOperation();
    hcls.advancedOperation();
    
    return 0;
}