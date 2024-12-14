#include <iostream>
#include <map>
using namespace std;

int main (){
    map <int, char> map1;  // Zero length map;
    // map <int, char> map1(4);  // 4 length empty map;
    map1[1] = 'A';
    map1[2] = 'B';
    map1[3] = 'C';
    map1[4] = 'D';

    map<int, char> :: iterator iter;
    cout << "Your elements is: " << endl;
    for (iter = map1.begin(); iter != map1.end(); iter++)
        cout << (*iter).first << " - " << (*iter).second << endl;
    
    return 0;
}