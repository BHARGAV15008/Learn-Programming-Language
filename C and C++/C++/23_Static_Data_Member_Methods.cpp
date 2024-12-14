#include <iostream>
using namespace std;

class Employee {
    int id;
    static int count;

    public:
        void setData(void) {
            cout << "Enter Employee ID:  ";
            cin >> id;
            count++;
        }

        void getData(void) {
            cout << "This is Employee number is " << count << endl;
            cout << "Employee ID is " << id << endl;
        }

        static void getCount(void) {
            // This is static member function which used to getting static data members from the respective class;
            cout << "The value of count is " << count << endl;
        }
};

// Static variable but noe its class variable;
// Visibility in the class only;
int Employee :: count;   // default value is 0;

int main (){
    Employee emp1, emp2, emp3, emp4;

    emp1.setData();
    emp1.getData();
    Employee::getCount();
    
    emp2.setData();
    emp2.getData();
    Employee::getCount();
    
    emp3.setData();
    emp3.getData();
    Employee::getCount();
    
    emp4.setData();
    emp4.getData();
    Employee::getCount();
    
    
    return 0;
}