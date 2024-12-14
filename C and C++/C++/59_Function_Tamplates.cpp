#include <iostream>
using namespace std;

// Creating function temlates;
template <class T1, class T2>
float averageNum (T1 a, T2 b){
    float avg = (a + b) / 2;
    return avg;
}

template <class T>
void swapp (T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main (){
    float avg;
    // avg = averageNum<int, int>(4, 6);
    avg = averageNum<float, float>(4.5, 6.5);

    cout << "Average of two number: " << avg << endl;

    // int a = 4, b = 5;
    // cout << "The value of A and B is " << a << ", " << b << endl;
    // swapp (a, b);
    // cout << "The value of A and B is " << a << ", " << b << endl;

    float a = 4.5, b = 6.7;
    cout << "The value of A and B is " << a << ", " << b << endl;
    swapp (a, b);
    cout << "The value of A and B is " << a << ", " << b << endl;
    
    return 0;
}