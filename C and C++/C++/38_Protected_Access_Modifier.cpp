/*
-----   Data access scope in inheritance   -----
                    public derivation       protected derivation        private derivation
    1. public           Not inherited           Not inherited               Not Inherited
    2. protected        protected               private                     protected
    3. private          public                  private                     protected
*/

#include <iostream>
using namespace std;

// Base class;
class Base {
    int data1;
    protected:
        int data4;  // Its make data private but its also allowed to access this data in derived class;
    public:
        int data2;
        void setData(void) {
            data1 = 10;
            data2 = 20;
            data4 = 40;
        }
};

// Derived class;
class Derived: public Base {
    int data3;
    public:
        void setData(int num) {
            data3 = num;
        }
};


int main (){
    Derived der;
    
    return 0;
}