#include <iostream>
using namespace std;

// Class templates with default parameters;
template <class T1=int, class T2=float, class T3=char>
class Ltech {
    public:
        T1 data1s;
        T2 data2s;
        T3 data3s;

        Ltech (T1 a, T2 b, T3 c) {
            data1s = a;
            data2s = b;
            data3s = c;
        }

        void display (void) {
            cout << "The value of data 1s: " << data1s << endl;
            cout << "The value of data 2s: " << data2s << endl;
            cout << "The value of data 3s: " << data3s << endl;
        }
};

int main (){
    Ltech<> lt1 (4, 5.6, 'B');
    lt1.display();
    cout << endl;

    Ltech<float, char> lt2(4.5, '6', 'B');
    lt2.display();
    cout << endl;

    Ltech<char, float, int> lt3('t', 5.5, 7);
    lt3.display();
    cout << endl;
    
    return 0;
}