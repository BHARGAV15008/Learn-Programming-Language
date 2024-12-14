#include <iostream>
using namespace std;

// Base class;
class Students {
    protected:
        int roll_no;
    public:
        void setRollNo (int);
        void getRollNo (void);
};

void Students :: setRollNo (int r) {
    roll_no = r;
}

void Students :: getRollNo (void) {
    cout << "Your roll number is " << roll_no << endl;
}


// Derived class;
class Exam : public Students {
    protected:
        float maths;
        float physics;
    public:
        void setMarks (float, float);
        void getMarks (void);
};

void Exam :: setMarks (float a, float b) {
    maths = a;
    physics = b;
}

void Exam :: getMarks (void){
    cout << "Marks obtained in Maths: " << maths << endl;
    cout << "Marks obtained in Physics: " << physics << endl;
}


// derived class;
class Result : public Exam {
    float percentage;
    public:
        void dispaly(void) {
            getRollNo();
            getMarks();
            cout << "Your percentage is " << (maths+physics)/2 << endl;
        }
};

int main (){
    Result res1;
    res1.setRollNo(420);
    res1.setMarks(84.5, 88.5);
    res1.dispaly();
    
    return 0;
}