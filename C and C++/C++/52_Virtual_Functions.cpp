/*
-----   Virtual Functions and Creation Rule   -----S
    * They cannot be static;
    * THey are accessed by object pointer;
    * Virtual functions can be a friend of another class;
    * A function in base class might canot be used;
    * Virtual means if function not found in derived class then they awaked;
*/

#include <iostream>
#include <cstring>
using namespace std;

/*
// Basic Example;
class BaseClass {
    public:
        int varBase;
        virtual void display (void) {
            cout << "Displaying Base class variable's value: " << varBase << endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        int varDerived;
        void display (void) {
            cout << "Displaying Base class variable's value: " << varBase << endl;
            cout << "Displaying Derived class variable's value: " << varDerived << endl;
        }
};
*/

class Leaftech {
    protected:
        string title;
        float rating;
    public:
        Leaftech (string s, float r) {
            title = s;
            rating = r;
        }

        virtual void display (void) {}
};

class LeaftechVideo : public Leaftech{
    int videoLen;
    public:
        LeaftechVideo (string s, float r, int vl) : Leaftech(s, r) {
            videoLen = vl;
        }

        void display (void) {
            cout << "This is good video : " << title << endl;
            cout << "Rating : " << rating << " / 5" << endl;
            cout << "Length of video : " << videoLen << " minutes" << endl;
        }
};

class LeaftechText : public Leaftech{
    int TextLen;
    public:
        LeaftechText (string s, float r, int tl) : Leaftech(s, r) {
            TextLen = tl;
        }

        void display (void) {
            cout << "This is good video : " << title << endl;
            cout << "Rating : " << rating << " / 5" << endl;
            cout << "Length of Text : " << TextLen << " words" << endl;
        }
};

int main (){
    // BaseClass *BaseClassPointer;
    // BaseClass BaseClassObject;
    // DerivedClass DerivedClassObject;
    // BaseClassPointer =  &DerivedClassObject;  // Pointing to derived class by Base class pointer;

    // // This print base class function due to the late binding;
    // BaseClassPointer->varBase = 35;
    // // BaseClassPointer->varDerived = 134;  // Gives an error;
    // BaseClassPointer->display();
    
    // // // // // // // // // // // // // // // // //
    string title;
    float rating;
    int vl, tl;

    // Initialization values;
    title = "LeafTech India";
    rating = 4.8;
    vl = 25.5;
    tl = 250;
    LeaftechVideo ltv(title, rating, vl);
    LeaftechText ltt(title, rating, tl);
    ltv.display();
    ltt.display();


    Leaftech *ptr[2];
    ptr[0] = &ltv;
    ptr[1] = &ltt;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}