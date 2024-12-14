/*
-----  There are two stream  -----
    * Input stream: Which takes input data from users;
    * Output Stream: Which gives output to the users;
*/
#include <iostream>
using namespace std;

int main (){
    int num1, num2;

    cout << "Enter your numbers: ";  // << is Insertion operators;
    cin >> num1 >> num2;  // >> is Extraction operators;

    cout << "Sum of num1 and num2: " << num1+num2;
    
    return 0;
}