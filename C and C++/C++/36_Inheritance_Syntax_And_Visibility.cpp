#include <iostream>
using namespace std;

// Base Class;
class Employee {
    float salary;
    public:
        int id;
        Employee () {}

        Employee (int inpId) {
            id = inpId;
            salary = 12500;
        }
};

// Derived class;
// syntax: class {{derived-class}} : {{visibility-mode}} {{base-class}} {class code here}
// Creating programmer class derived from employee;
// Default visibility mode is private;
// Visibility mode is making all member of base class is public or private;
// Private member of base class which never inherited;
class Programmer : Employee {
        int langCode;
    public:
        Programmer (int inId) {
            id = inId;
            langCode = 9;
        }

        void getData (void) {
            cout << id << ", " << langCode << endl;
        }

};

int main (){
    Employee emp1(5), emp2(12);

    Programmer skillf(12);

    cout << emp1.id << endl;
    cout << emp2.id << endl;
    skillf.getData();
    
    return 0;
}