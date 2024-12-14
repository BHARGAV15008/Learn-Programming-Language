#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

/*
-----   File stream   -----
    * fstreambase - Base class;
    * ifstream --> Derived for fstreambase class;
    * ofstream --> Derived for fstreambase class;
*/

// There is two ways to open files;
//  - Using Constructor;
//  - Using the member function open() of the class;

int main (){
    // string s = "Hello everybody!!!";
    string s1;
    // // Reading or writing files;
    // // // Case I: Using constructor open and writing to it;
    // ofstream out("sample.txt");
    // out << s;  // Write to the files;

    // Closing files;
    // out.close();


    // // Case II: Using constructor open and reading from it;
    ifstream in("sample.txt");
    in >> s1;  // Write to the files;
    cout << s1 << endl;
    getline(in, s1);
    cout << s1 << endl;

    // Closing files;
    in.close();

    return 0;
}