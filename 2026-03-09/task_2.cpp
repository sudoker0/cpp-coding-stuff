#include <bits/stdc++.h>
using namespace std;

class Point {
public:
    double x, y;
};

class Line {
public:
    Point p1, p2;
};

int main() {
    Line ab, cd;
    cin >> ab.p1.x >> ab.p1.y >> ab.p2.x >> ab.p2.y;
    cin >> cd.p1.x >> cd.p1.y >> cd.p2.x >> cd.p2.y;

    double dx1 = ab.p2.x - ab.p1.x;
    double dy1 = ab.p2.y - ab.p1.y;
    double dx2 = cd.p2.x - cd.p1.x;
    double dy2 = cd.p2.y - cd.p1.y;
    double denom = dx1 * dy2 - dy1 * dx2;

    if (denom == 0) {
        cout << "MANY";
    } else {
        double t = (dx2 * (ab.p1.y - cd.p1.y) - dy2 * (ab.p1.x - cd.p1.x)) / denom;
        if (t < 0 || t > 1) {
            cout << "NO";
        } else {
            double x_intersect = ab.p1.x + t * dx1;
            double y_intersect = ab.p1.y + t * dy1;
            cout << fixed << setprecision(2) << x_intersect << " " << y_intersect;
        }
    }

    return 0;
}
