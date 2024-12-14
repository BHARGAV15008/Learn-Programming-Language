#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &vec) {
    cout << "Your elements is: " << endl;
    // for (int i = 0; i < vec.size(); i++)
    //     cout << vec[i] << " ";
    for (int i = 0; i < vec.size(); i++)
        cout << vec.at(i) << " ";
    cout << endl;
}

int main (){
    int ele, size;
    // vector <int> vec1; // Zero length vector;
    // cout << "Enter your size of vecotr: ";
    // cin >> size;

    // cout << "Enter elements to the Vector: " << endl;
    // for (int i = 0; i < size; i++) {
    //     cin >> ele;
    //     vec1.push_back(ele);
    // }

    // // // Create vector iterator;
    // // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter, 566);
    // // vec1.insert(iter, 560);

    vector <char> vec2(4);  // 4-element of character vector;
    vec2.push_back('A');
    vec2.push_back('B');
    vec2.push_back('C');
    vec2.push_back('D');

    vector <vector <char>> vec3(4);  // 4, 4-element of character vector;
    vec3 = {{'A', 'B'}, {'C', 'D'}, {'E', 'F'}, {'G', 'H'}};

    display(vec2);

    for (int i = 0; i < vec3.size(); i++){
        for (int j = 0; j < vec3[i].size(); j++)
            cout << vec3.at(i).at(j) << " ";
        cout << endl;
    }
    
    return 0;
}