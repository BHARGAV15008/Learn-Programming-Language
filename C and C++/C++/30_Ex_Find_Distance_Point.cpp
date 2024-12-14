#include <iostream>
#include <cmath>
using namespace std;

class Point {
    int a, b;
    public:
        Point (int x, int y) {
            a = x;
            b = y;
        }

        friend float finDistancePoint(Point p1, Point p2);

        void displayPoint (void) {
            cout << "The point is (" << a << ", " << b << ")" << endl;
        }
};

float finDistancePoint (Point p1, Point p2) {
    return sqrt(pow((p2.a - p1.a), 2) + pow((p2.b - p1.b), 2));
}

int main (){
    float distance;
    Point p = Point(1, 3);
    Point q = Point(2, 5);

    p.displayPoint();
    q.displayPoint();

    distance = finDistancePoint(p, q);
    cout << "Diatance between the point is " << distance << endl;

    return 0;
}