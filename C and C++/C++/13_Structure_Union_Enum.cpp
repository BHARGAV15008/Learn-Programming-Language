#include <iostream>
using namespace std;

// Structure usedto store information of users or items with multiple datatypes;
struct Employee {
    int eid;
    char favChar;
    float salary;
};

// Union is like structure;
// Union gives better memory managements; 
// We have to use Only one variable at time;
union money {
    // Union Occupied memory = highest occupied variable datatypes;
    int rice;  // 4
    char rupees;  // 1
    float pound;  // 4
};

int main (){
    // ***   Structure Implements   ***
    struct Employee btr; // create Structure variable used fetch data;
    btr.eid = 105;
    btr.favChar = 'B';
    btr.salary = 25030.535;

    // Printing the data of Users;
    cout << "Printing the data of users..." << endl;
    cout << "Value of Employee ID: " << btr.eid << endl;
    cout << "Value of Employee Char: " << btr.favChar << endl;
    cout << "Value of Employee Salary: " << btr.salary << endl;

    // ***   Union Implements   ***
    union money my; // create Union variable used fetch data;
    my.rice = 105;
    // Printing the data of Users;
    cout << endl << "Printing the data of money..." << endl;
    cout << "Value of money in rice: " << my.rice << endl;
    cout << "Value of money in rupees: " << my.rupees << endl;
    cout << "Value of money in Pound: " << my.pound << endl;

    
    my.rupees = 'B';
    // Printing the data of Users;
    cout << endl << "Printing the data of money..." << endl;
    cout << "Value of money in rice: " << my.rice << endl;
    cout << "Value of money in rupees: " << my.rupees << endl;
    cout << "Value of money in Pound: " << my.pound << endl;

    // ***   Enum Implements   ***
    cout << endl;
    enum meals{Breakfast, Lunch, Dinner};
    cout << "Value of meals is " << Breakfast << endl; 
    cout << "Value of meals is " << Lunch << endl; 
    cout << "Value of meals is " << Dinner << endl; 
    
    return 0;
}