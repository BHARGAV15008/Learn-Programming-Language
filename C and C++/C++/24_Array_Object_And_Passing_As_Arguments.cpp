#include <iostream>
using namespace std;

class Complex {
    int a;
    int b;
    public:
        void setData (int v1, int v2) {
            a = v1;
            b = v2;
        }

        // Passing object as arguments;
        void setDataBySum(Complex o1, Complex o2) {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        // Printing complex number methods;
        void printNumber(void) {
            cout << "Your Complex Number is " << a << " + " << b << "i" << endl;
        }
};

// Performing the creating array of objects;
class Employee {
    int id;
    int salary;
    public:
        void setId (void){
            salary = 10500;
            cout << "Enter your Id: ";
            cin >> id;
        }
        
        void getId (void){
            cout << "Employee your Id is " << id << " and their salary is " << salary << endl;
        }
};

int main (){
    // // Creating class array of objects;
    // Employee emp[4];
    // for (int i = 0; i < 4; i++) {
    //     emp[i].setId();
    //     emp[i].getId();
    // }
    
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(14, 13);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}