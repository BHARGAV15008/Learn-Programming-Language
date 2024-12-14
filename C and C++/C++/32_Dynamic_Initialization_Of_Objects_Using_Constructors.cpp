#include <iostream>
using namespace std;

class BankDeposit {
    int principal, year;
    float rate, returnValue;
    public:
        BankDeposit() {}
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show(void);
};

BankDeposit :: BankDeposit(int p, int y, float r) {
    principal = p;
    year = y;
    rate = r;
    returnValue = principal;
    for (int i = 1; i < y; i++)
        returnValue *= (1+rate);
}

BankDeposit :: BankDeposit(int p, int y, int r) {
    principal = p;
    year = y;
    rate = (float)r/100;
    returnValue = principal;
    for (int i = 1; i < y; i++)
        returnValue *= (1+rate);
}

void BankDeposit :: show() {
    cout << "Your principal is " << principal
    << " And its returns after " << year << " years is "
    << returnValue << " with interest rate is " << rate << "." << endl;
}

int main (){
    BankDeposit bank1;
    int y, p;
    float r;

    cout << "Enter your principal amount: ";
    cin >> p;

    cout << "Enter number of year: ";
    cin >> y;

    cout << "Enter interest rate: ";
    cin >> r;

    bank1 = BankDeposit(p, y, r);
    bank1.show();
    
    return 0;
}