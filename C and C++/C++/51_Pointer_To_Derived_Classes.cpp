#include <iostream>
using namespace std;

class BaseClass {
    public:
        int varBase;
        void display (void) {
            cout << "Displaying Base class variable's value: " << varBase << endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        int varDerived;
        void display (void) {
            cout << "Displaying Base class variable's value: " << varBase << endl;
            cout << "Displaying Derived class variable's value: " << varDerived << endl;
        }
};

int main (){
    BaseClass *BaseClassPointer;
    BaseClass BaseClassObject;
    DerivedClass DerivedClassObject;
    BaseClassPointer =  &DerivedClassObject;  // Pointing to derived class by Base class pointer;

    // This print base class function due to the late binding;
    BaseClassPointer->varBase = 35;
    // BaseClassPointer->varDerived = 134;  // Gives an error;
    BaseClassPointer->display();

    DerivedClass *DerivedClassPointer;
    DerivedClassPointer = &DerivedClassObject;
    DerivedClassPointer->varDerived = 98;
    DerivedClassPointer->display();
    
    return 0;
}