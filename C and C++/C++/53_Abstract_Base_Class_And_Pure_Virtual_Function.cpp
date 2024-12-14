#include <iostream>
#include <cstring>
using namespace std;

// Making abstract class;
// A class which not for creating object;
// Abstract class which have minimum one pure virtual function;
// Pure virtual function;
class Leaftech {
    protected:
        string title;
        float rating;
    public:
        Leaftech (string s, float r) {
            title = s;
            rating = r;
        }

        virtual void display (void) = 0; //  Do nothing function - Pure virtual function;
        // It means in in every derived class you have to define function of display;
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
    
    return 0;
}