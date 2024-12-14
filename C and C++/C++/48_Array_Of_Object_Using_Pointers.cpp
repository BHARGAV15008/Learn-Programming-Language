#include <iostream>
using namespace std;

class Shop {
    int id;
    float price;
    public:
        void setData(int a, float b) {
            id = a;
            price = b;
        }

        void getData(void) {
            cout << "Item id is " << id << endl;
            cout << "Item price is " << price << endl;
        }
};

int main (){
    int p, q;
    Shop *ptr = new Shop[3];   // Creating object of array;
    Shop *temptr = ptr;
    for (int i = 0; i < 3; i++){
        cout << "Enter Id and price of item: ";
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    // Printing data;
    ptr = temptr;
    for (int i = 0; i < 3; i++){
        ptr->getData();
        ptr++;
    }

    delete temptr;
    delete ptr;
    
    return 0;
}