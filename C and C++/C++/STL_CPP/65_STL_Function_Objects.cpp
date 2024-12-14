#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main (){
    // Function Objects (functor);
    // Function wrapped in class, so that it available like an objects;
    int arr[] = {1, 3, 6, 78, 5, 9};

    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;

    sort(arr, arr+6);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;

    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}