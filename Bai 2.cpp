#include <iostream>
using namespace std;

class Point {
public:
    double x, y;
};

class Line {
public:
    Point p1, p2;
};

Point giaodiem(Line l1, Line l2) {
    Point result;
    double a1 = l1.p2.y - l1.p1.y;
    double b1 = l1.p1.x - l1.p2.x;
    double c1 = a1 * l1.p1.x + b1 * l1.p1.y;

    double a2 = l2.p2.y - l2.p1.y;
    double b2 = l2.p1.x - l2.p2.x;
    double c2 = a2 * l2.p1.x + b2 * l2.p1.y;

    double determinant = a1 * b2 - a2 * b1;

    if (determinant == 0) {
        if (a1 * c2 == a2 * c1 && b1 * c2 == b2 * c1) {
            result.x = result.y = 0; // MANY
        } else {
            result.x = result.y = 0; // NO
        }
    } else {
        result.x = (b2 * c1 - b1 * c2) / determinant;
        result.y = (a1 * c2 - a2 * c1) / determinant;
    }
    return result;
}

int main() {
    Line AB, CD;
    cin >> AB.p1.x >> AB.p1.y >> AB.p2.x >> AB.p2.y >> CD.p1.x >> CD.p1.y >> CD.p2.x >> CD.p2.y;

    Point diem = giaodiem(AB, CD);
    
    if (diem.x == 0 && diem.y == 0) {
        cout << "NO" << endl;
    } else if (diem.x == 0 && diem.y == 0) {
        cout << "MANY" << endl;
    } else {
        cout << diem.x << " " << diem.y << endl; 
    }
    
    return 0;
}