#include <iostream>
using namespace std;

int main (){
    // Pointer used to reference or store address of others variables;
    int n = 5;
    int *ptr = &n; // Create pointer and its stored address of n;
    int **ptrptr;  // Pointer to pointer;
    ptrptr = &ptr;
    // & is address of operator;
    cout << "Address of n is " << ptr << endl;
    cout << "Address of n is " << &n << endl;
    cout << "Address of ptr is " << ptrptr << endl;
    cout << "Address of ptr  is " << &ptr << endl;

    // * is (Value at) dereference operator;
    cout << "Value of n is " << *ptr << endl;
    cout << "Value of n is " << n << endl;
    cout << "Address of  n is " << *ptrptr << endl;
    cout << "Value of n is " << **ptrptr << endl;

    return 0;
}