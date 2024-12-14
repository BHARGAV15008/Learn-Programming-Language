#include <iostream>
using namespace std;

class Students {
    protected:
        int roll_number;
    public:
        void setNumber(int a) {
            roll_number = a;
        }

        void printNumber(void) {
            cout << "Your roll number is " << roll_number << endl;
        }
};

class Sports : virtual public Students {
    protected:
        int points;
    public:
        void setScore (int s) {
            points = s;
        }

        void printScore (void) {
            cout << "Your Score is " << points << endl;
        }
};

class Tests : virtual public Students {
    protected:
        float maths, physics;
    public:
        void setMarks(float m1, float m2) {
            maths = m1;
            physics = m2;
        }

        void printMarks(void) {
            cout << "Marks of Maths and Physics respectively is " << maths << ", " << physics << endl;
        } 
};

class Results : public Sports, public Tests {
    private:
        float total;
    public:
        void setToal (void) {
            total = maths + physics + points;
        }

        void printToal (void) {
            printNumber();
            printMarks();
            printScore();
            cout << "Your total score is " << total << endl;
        }
};

// When you remove virtual from inheritance class then gives error;
// Because of the setNumber function fetch from which class is gives ambiguity;

int main (){
    Results play1;
    play1.setMarks(78, 82);
    play1.setNumber(102);
    play1.setScore(89);
    play1.setToal();
    play1.printToal();
    
    return 0;
}