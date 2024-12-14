#include <iostream>
using namespace std;

// Perform Member template function and Overloading function templates;
template <class T>
class Ltech {
    public:
        T data;

        Ltech (T a) {
            data = a;
        }

        void display (void);
};

template <class T>
void Ltech<T> :: display (void) {
    cout << "Value of Data: " << data << endl;
}

int main (){
    Ltech<int> lt(5);
    lt.display();

    Ltech<float> lt1(5.5);
    lt1.display();
    
    return 0;
}