#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int a = 4;
    const int b = 6;  // Now we cannot change this variable;
    // b = 7; // Gives error because of constant variable;
    cout << "The value of constant variable b is " << b << endl;

    // ***  Manipulators  ***
    //  * endl : Used to jump to new line;
    //  * setw(int): Fill the number; and so on;

    float ab = 34.5;
    int cd = 54;

    cout << "The value of variable a is " << a << endl;    
    cout << "The value of variable ab is " << ab << endl;    
    cout << "The value of variable cd is " << cd << endl; 

    cout << "The value of variable a is " << setw(4) << a << endl;    
    cout << "The value of variable ab is " << setw(4) << ab << endl;    
    cout << "The value of variable cd is " << setw(4) << cd << endl;    
    
    return 0;
}