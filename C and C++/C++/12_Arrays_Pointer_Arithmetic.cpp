// Array used to stored more than one value of same datatypes in contiguous memory location;
// One value fetch by using index value which started with 0;
// Array is defined with square brackets with variable;

#include <iostream>
using namespace std;

int main (){
    int marks[10] = {24, 46, 78, 89, 23};
    
    // Print value by using index;
    cout << "The value at index 0 " << marks[0] << endl;
    cout << "The value at index 1 " << marks[1] << endl;
    cout << "The value at index 2 " << marks[2] << endl;
    cout << "The value at index 3 " << marks[3] << endl;
    cout << "The value at index 4 " << marks[4] << endl;

    // We have to assign value by using index and change value by using index of elements;
    marks[0] = 56;
    marks[2] = 78;
    cout << endl << "The value at index 0 " << marks[0] << endl;
    cout << "The value at index 1 " << marks[1] << endl;
    cout << "The value at index 2 " << marks[2] << endl;
    cout << "The value at index 3 " << marks[3] << endl;
    cout << "The value at index 4 " << marks[4] << endl;

    // Print elements using for loop
    cout << endl << "Print elements using for loops....." << endl;
    for (int i = 0; i < 5; i++)
        cout << "The value at index " << i << " " << marks[i] << endl;
    
    // ***   Pointer Arithmetic   ***
    int *ptrArr;  // Create pointer to perform pointer arithmetics;
    ptrArr = marks;
    cout << "Address of marks array : " << marks << endl;
    cout << "Address of marks array : " << ptrArr << endl;
    cout << endl << "Printing elements and their address by using pointer arithmetic:" << endl;
    cout << "Value at " << ptrArr << " is " << *ptrArr << endl;
    cout << "Value at " << ptrArr+1 << " is " << *(ptrArr+1) << endl;
    cout << "Value at " << ptrArr+2 << " is " << *(ptrArr+2) << endl;
    cout << "Value at " << ptrArr+3 << " is " << *(ptrArr+3) << endl;
    cout << "Value at " << ptrArr+4 << " is " << *(ptrArr+4) << endl;

    return 0;
}