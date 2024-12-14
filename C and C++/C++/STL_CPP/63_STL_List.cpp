#include <iostream>
#include <list>
using namespace std;

template <class T>
void display(list<T> &lst) {
    list <int> :: iterator iter;
    cout << "Your elements is: " << endl;
    for (iter = lst.begin(); iter != lst.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}

int main (){
    list <int> list1;  // list of zero length;
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(3);
    list1.push_back(8);
    list1.push_back(5);
    list1.push_back(6);

    display(list1);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(4);
    // list1.sort();  // sorting list;
    display(list1);
    
    list <int> list2(3); // list with size 3;
    list <int> :: iterator iter;
    iter = list2.begin();
    *iter = 23;
    iter++;
    *iter = 43;
    iter++;
    *iter = 63;
    display(list2);

    // Merge list1 and list2;
    list1.merge(list2);
    list1.sort();
    // list1.reverse();
    display(list1);

    return 0;
}