#include <iostream>
using namespace std;

// Making function inline;
// Inline function used when your function is taking less memory or less line;
// This function replace code;
// Inline function not used when implements recursion function or use static vasriable in it;
// Because static variable executes multiple time;
inline int product (int a, int b = 6){
    return (a * b);
}

// Default variable is defined as during function defination we assign is called Default variables;
// In above function we declare or initialise a during function defination;
// Default variable define at last;

// We define the const variable arguments in function then we cannot change it;
int main (){
    int a, b;

    cout << "Enter your value of a and b: ";
    cin >> a >> b;

    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    
    return 0;
}