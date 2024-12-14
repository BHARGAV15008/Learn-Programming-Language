// Nesting of member function means call the class function into the class another function;

#include <iostream>
#include <string>
using namespace std;

// Nesting member function;
class Binary {
    string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones_complement(void);
        void display(void);
};

void Binary :: read(void) {
    cout << "Enter a Binary number: " << endl;
    cin >> s;
}

void Binary :: chk_bin(void) {
    for (int i = 0; i < s.length(); i++){
        if (s[i] != '0' && s[i] != '1') {
            cout << "This is not binary number....." << endl;
            break;
        }
    }
}

void Binary :: display(void) {
    chk_bin();  // This is nesting of member function;
    for (int i = 0; i < s.length(); i++)
        cout << s.at(i);
    
    cout << endl;
}

void  Binary :: ones_complement(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '1')
            s.at(i) = '0';
        else
            s.at(i) = '1';
    }
}

int main (){
    // Call the function;
    Binary b;
    b.read();
    b.chk_bin();
    
    return 0;
}