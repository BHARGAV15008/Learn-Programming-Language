#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main (){
    string s;
    // ofstream out;
    // out.open("sample.txt");
    // out << "Hi Everybody....." << endl;
    // out << "Hello I am Bhargav.....";
    // out.close();

    ifstream in;
    in.open("sample.txt");
    while (in.eof() == 0) {
        getline(in, s);
        cout << s << endl;
    }
    in.close();

    return 0;
}