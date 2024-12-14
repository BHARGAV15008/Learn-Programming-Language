#include <iostream>
using namespace std;

int main (){
    int n = 20;

    for (int i = 0; i < n; i++){
        cout << "The value of i is " << i << endl;
        if (i == 6)
            break; // This statements used to jump out loops block;
    }
    
    for (int i = 0; i < n; i++){
        if (i == 6)
            continue; // This statements used to Skip the statements after this line;
        
        cout << "The value of i is " << i << endl;
    }
    
    return 0;
}