/*
-----   Here different types of functions....   -----
    * Return type with Arguments;
    * Return type witout Arguments;
    * Witout Return type with Arguments;
    * Without Return type without Arguments;
*/

#include <iostream>
using namespace std;

// Here we creates functions and function prototypes;
// Function gives reusability functionality;
int sum (int, int); // This is function Prototypes;

int main (){
    int num1, num2;

    cout << "Enter your number 1: " << endl;
    cin >> num1;
    cout << "Enter your number 2: " << endl;
    cin >> num2;

    // Here we pass num1 and num2 in function then they are Actual paramenters;
    cout << "The sum of number 1 and number 2: " << sum(num1, num2) << endl;  // Here we call the function;
    
    return 0;
}

// This is function declaration and defination;
// Here we defined a and b variable in function then they are Formal parameters;
int sum (int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}