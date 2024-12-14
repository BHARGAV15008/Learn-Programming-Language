// Function overloading means create function with same name but different arguments and different return types;

#include <iostream>
using namespace std;

// Generate function of two arguments;
int sum (int a, int b) {
    cout << "Use this Function of two arguments....." << endl;
    return a + b;
}

// Generate function with same name with three arguments;
int sum (int a, int b, int c) {
    cout << "Use this Function of three arguments....." << endl;
    return a + b + c;
}

int main (){
    int a = 6, b = 7, c = 8;

    cout << "The sum of a and b is " << sum(a, b) << endl;
    cout << "The sum of a and b and c is " << sum(a, b, c) << endl;
    
    return 0;
}