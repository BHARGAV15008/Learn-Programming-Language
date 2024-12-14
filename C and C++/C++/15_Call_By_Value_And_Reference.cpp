#include <iostream>
using namespace std;

// Here we defined function;
// Which take two variables during call that's means the function is call by value;
// Call by value function which cannot change actual variables data,
// which pass during call but they change just their local variables data;
void swap_CBV(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Which take two variable's adresses during call that's means the function is call by reference;
// Call by referenced function which can change actual variables which pass during call;
// By Using pointer variable;
void swap_CBR_1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// By Using reference variable;
void swap_CBR_2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main (){
    int num1 = 4, num2 = 5;

    cout << "The value of num1 and num2 before Call by valued function respectively is " << num1 << ", " << num2 << endl;
    swap_CBV(num1, num2);  // Calling call by valued function;
    cout << "The value of num1 and num2 after Call by valued function respectively is " << num1 << ", " << num2 << endl;
    cout << endl;
    
    cout << "The value of num1 and num2 before Call by referenced function by pointer variable respectively is ";
    cout << num1 << ", " << num2 << endl;
    swap_CBR_1(&num1, &num2);  // Calling call by referenced function;
    cout << "The value of num1 and num2 after Call by referenced function by pointer variable respectively is ";
    cout << num1 << ", " << num2 << endl;
    cout << endl;

    cout << "The value of num1 and num2 before Call by referenced by function reference variable respectively is ";
    cout << num1 << ", " << num2 << endl;
    swap_CBR_2(num1, num2);  // Calling call by referenced function;
    cout << "The value of num1 and num2 after Call by referenced by function reference variable respectively is ";
    cout << num1 << ", " << num2 << endl;
    cout << endl;
    
    return 0;
}