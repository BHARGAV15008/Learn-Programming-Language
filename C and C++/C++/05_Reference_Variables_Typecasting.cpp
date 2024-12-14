#include <iostream>
using namespace std;

int main (){
    int num1, num2;
    // //  Take input from the users;
    // cout << "Enter your number 1 and number 2: ";
    // cin >> num1 >> num2;

    // int sum = num1 + num2;
    // cout << "Your sum is " << sum << endl;
    // cout << "The size of 34.4  : " << sizeof(34.4) << endl;
    // cout << "The size of 34.4l : " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L : " << sizeof(34.4L) << endl;
    // cout << "The size of 34.4f : " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F : " << sizeof(34.4F) << endl;

    // ***  Referenced Variable  ***
    // Referenced variable used to call different names;
    float x = 8.5f;
    float & y = x;  // y Referenced to x;

    cout << "The value of x " << x << endl;
    cout << "The value of y " << y << endl;

    // ***  Typecasting the variable  ***
    // Typecasting used to change datatype of variables;
    int a = 45;
    float b = 45.45;
    cout << "Value of a is " << a << "  " << (float)a << endl;
    cout << "Value of b is " << b << "  " << (int)b << endl;
    cout << "Value of a is " << a << "  " << float(a) << endl; // Different methods;
    cout << "Value of b is " << b << "  " << int(b) << endl;

    return 0;
}