#include <iostream>
using namespace std;

class A {
    int a;
    public:
        // // Case I
        void setData (int a) {
            // this->a = a;
            (*this).a = a;
        }

        // // // Case II
        // A& setData (int a) {
        //     // this->a = a;
        //     (*this).a = a;
        //     return (*this);
        // }

        void getData (void) {
            cout << "The value of a is " << a << endl;
        }
};

int main (){
    // This is a keyword which is a pointer which points to the objects which invokes the memeber function;

    A a;
    a.setData(4);
    // a.setData(4).getData();  // Case II
    a.getData();  // Case I
    
    return 0;
}