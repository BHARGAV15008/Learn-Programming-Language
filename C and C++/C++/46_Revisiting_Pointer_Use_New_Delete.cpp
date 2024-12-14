#include <iostream>
using namespace std;

int main (){
    // Basic example;
    int num = 5;
    int *ptr = &num;
    
    cout << "Value ptr is " << ptr << endl;
    cout << "Value in ptr is " << *ptr << endl;

    // Expain new keyword or operator;
    int *ptra = new int(40);  // assign value to the ptra;
    cout << "The value of ptra is " << ptra << endl;
    cout << "The value in ptra is " << *ptra << endl;

    int *arr = new int[3];  // Creating array of three elements;
    arr[0] = 34;
    arr[1] = 44;
    arr[2] = 54;
    cout << "Value of arr[0] : " << arr[0] << endl;
    cout << "Value of arr[1] : " << arr[1] << endl;
    cout << "Value of arr[2] : " << arr[2] << endl;


    // Explain delete operator or keyword;
    delete[] arr;  // It freed the array dynamically alocated;
    cout << "Value of arr[0] : " << arr[0] << endl;
    cout << "Value of arr[1] : " << arr[1] << endl;
    cout << "Value of arr[2] : " << arr[2] << endl;

    delete ptra;
    cout << "The value of ptra is " << ptra << endl;
    cout << "The value in ptra is " << *ptra << endl;

    return 0;
}