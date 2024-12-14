/*
-----   Control Structures   -----
    * Sequence Structures;
    * Selection Structures;
    * Loop Structures;


-----   Control Statements   -----
    * If-Else statements:
        - If statements;
        - If-else statements;
        - Nested If statements;
        - Nested If-else statements;
        - If-else ladder statements;
    * Switch-Case statements:
        - Switch-case statements;
        - Nested Switch-case statements; 
*/

#include <iostream>
using namespace std;

int main (){
    int age, day;

    cout << "Enter your age: " << endl;
    cin >> age;

    // If-Esle statements implements;
    if (age >= 18)
        cout << "You are Eligible for getting Licence..." << endl;
    else
        cout << "You are not Eligible for getting Licence..." << endl;

    // Switch-Case statements;
    cout << "Enter your day: " << endl;
    cin >> day;

    switch (day) {
        case 1:
            cout << "Sunday" << endl;
            break;
        
        case 2:
            cout << "Monday" << endl;
            break;
        
        case 3:
            cout << "Tuesday" << endl;
            break;
        
        case 4:
            cout << "Wednesday" << endl;
            break;
        
        case 5:
            cout << "Thursday" << endl;
            break;
        
        case 6:
            cout << "Friday" << endl;
            break;
        
        case 7:
            cout << "Saturday" << endl;
            break;
        
        default:
            cout << "Wrong input!!!" << endl;
    }

    
    return 0;
}