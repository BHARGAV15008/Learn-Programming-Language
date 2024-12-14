#include <iostream>
#include <cstdlib>
using namespace std;

class Shop {
    // By default all elements are private;
    int itemID[20];
    int itemPrice[20];
    int counter;

    public:
        void initCounter(void) {counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void) {
    cout << "Enter ID of your Items: " << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your Items: " << endl;
    cin >> itemPrice[counter];
    cout << endl;
    counter++;
}

void Shop :: displayPrice(void) {
    for (int i = 0; i < counter; i++)
        cout << "Price of the item Id " << itemID[i] << " is " << itemPrice[i] << endl;
}

int main (){
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    
    return 0;
}