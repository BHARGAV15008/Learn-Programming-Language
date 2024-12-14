#include <iostream>
using namespace std;
int count = 0;

// Destructors never takes arguments and never return values;
class Num {
    public:
        Num () {
            count++;
            cout << "This is time when Constructor is called for object number " << count << endl;
        }

        ~ Num () {
            cout << "This is time when my destructor will called " << count << endl;
            count--;
        }
};

int main (){
    cout << "Here we are in main functions....." << endl;
    cout << "Creating first object n1....." << endl;
    Num n1;
    {
        cout << "Entering blocks....." << endl;
        cout << "Creating two object n2, n3....." << endl;
        Num n2, n3;
        cout << "Exiting blocks....." << endl;
    }
    cout << "Back to main function....." << endl;
    
    return 0;
}