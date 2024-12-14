// Templates:
//  - Class --> Object
//  - Templates --> Class

// Templates used to define class for different datatypes;
// It is also called parameterised classes;
// Generic proramming stabilised;
// Syntax:
//      template <class T>
//      class className {
//          // Your code here;
//          // but every variable datatypes should be T;
//      }

#include <iostream>
using namespace std;

// Creating class templates;
template <class T>
class Vector {
    public:
        T *arr;
        int size;
        Vector (int m) {
            size = m;
            arr = new T[size];
        }

        T dotProduct (Vector &v){
            T dotp = 0;
            for (int i = 0; i < size; i++)
                dotp += (this->arr[i] * v.arr[i]);
            
            return dotp;
        }
};

int main (){
    // // Here we define vector's datatype int;
    // Vector <int>v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;

    // Vector <int>v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 3;


    // Here we define vector's datatype float;
    Vector <float>v1(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.2;
    v1.arr[2] = 1.2;

    Vector <float>v2(3);
    v2.arr[0] = 1.1;
    v2.arr[1] = 0.5;
    v2.arr[2] = 3.6;
    cout << "Dot product of vector is " << v1.dotProduct(v2) << endl;
    
    return 0;
}