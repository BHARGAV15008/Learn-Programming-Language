// Header files which include or contains lots of syntax and built in function;
// There is two types of Header files:
//  1. User defined: This created by Users or programmer;
//  2. System Header files: Which comes with compilers;
//  * Between "" files which present in current directory;
//  * Between <> files which present in system directory;
/*
-----   Operators in C++   -----
    * Arithmetic Operators:
        - Addition (+)
        - Subtraction (-)
        - Multiplication (*)
        - Division (/)
        - Modulo (Remainder) (%)
        - Increment Operator (++) : post and pre
        - Decrement Operator (--) : post and pre
    
    * Assignment Operators:
        - Assign (=)
        - Add and Assign (+=)
        - Sub and Assign (-=)
        - Mul and Assign (*=)
        - Div and Assign (/=)
        - Mod and Assign (%=)
    
    * Comparison Operators:
        - Equal to (==)
        - Not Equal to (!=)
        - Greater than (>)
        - Less than (<)
        - Greater than Equal to (>=)
        - Less than Equal to (<=)
    
    * Logical Operators:
        - Or (||)
        - And (&&)
        - Not (!)

    * Bitwise Operators:
        - And (&)
        - Or (|)
        - Complement (~)
        - Xor (^)
*/

#include <iostream>
using namespace std;

int main (){
    int num1 = 5, num2 = 6;
    
    // Implements Arithmetic Operators;
    cout << "*** Implements Arithmetic Operators ***" << endl;
    cout << "Addition (+) : " << num1 + num2 << endl;
    cout << "Subtraction (-) : " << num1 - num2 << endl;
    cout << "Multiplication (*) : " << num1 * num2 << endl;
    cout << "Division (/) : " << num1 / num2 << endl;
    cout << "Modulo (Remainder) (%) : " << num1 % num2 << endl;
    cout << "Increment Operator (++) : post and pre : " << num1++ << " " << ++num1 << endl;
    cout << "Decrement Operator (--) : post and pre : " << num1-- << " " << --num2 << endl;

    // Implements Comparison Operators
    cout << endl << "*** Implements Arithmetic Operators ***" << endl;
    cout << "Equal to (==) : " << (num1 == num2) << endl;
    cout << "Not Equal to (!=) : " << (num1 != num2) << endl;
    cout << "Greater than (>) : " << (num1 > num2) << endl;
    cout << "Less than (<) : " << (num1 < num2) << endl;
    cout << "Greater than Equal to (>=) : " << (num1 >= num2) << endl;
    cout << "Less than Equal to (<=) : " << (num1 <= num2) << endl;
    
    return 0;
}