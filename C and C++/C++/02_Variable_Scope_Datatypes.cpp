/*
-----  Variable has different types of datatypes   -----
    * int: It is store integer number;
    * float, double: It is store Decimal number;
    * char: It is store single character;
    * Boolean: Stored true or false;

-----  Variable has two types according scope   -----
    * Local Variable:
        - Variable active until the block exists;
    * Global Variable:
        - Variable active till the program;

-----  Datatypes is also three types  -----
    * Built-in: int. bool, double, float, char;
    * User Define: Struct, Union, Enum;
    * Derived: Array, Function, Pointer;

-----  Rules of Identifier   -----
    * Identifier cannot be reserve keywords;
    * Identifier never be started with digit or any other character rather than alphabet and underscore;
    * Avoid to use same identifier defination;
*/

#include <iostream>
using namespace std;
int x = 54; // Global variable;
// If global variable and local variable name is same then code gives first priority to their local variable;

int main (){
    // Local variables;
    int a = 4, b = 3;  // Value of a and b is active on this blocks;
    float pi = 3.14;
    char c = 'c';
    bool isit = true;
    cout << isit << "\n";
    cout << "The value of a and b nad pi and c is \n" << a << ", " << b << ", " << pi << ", " << c;
    
    return 0;
}