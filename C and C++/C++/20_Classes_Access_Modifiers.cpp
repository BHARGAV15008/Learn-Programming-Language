#include <iostream>
using namespace std;

// Here we create class like structure and union;
// Structure not change that's why we use classes;
// Class is template which store feature;
class Employee {
    private:  // This access modifier which able to access their data in this class function only;
        int a, b, c;
    public:  // This access modifier which able to access data anywhere;
        int ab, bc;
        void setData (int a , int b, int c);  // Declaration;
        void getData () {   // Here we declared or define function;
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of ab is " << ab << endl;
            cout << "The value of bc is " << bc << endl;
        }
};

// Also we define function outside the classes;
void Employee :: setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
} 

int main (){
    Employee emp1;  // Here we create object or instance of class;
    emp1.setData(12, 13, 24);
    emp1.ab = 56;
    emp1.bc = 45;
    // emp1.a = 4;  // Gives error, because of private data;
    emp1.getData();
    
    return 0;
}