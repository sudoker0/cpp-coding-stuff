#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << "Vo nghiem";
        return 0;
    }

    cout << fixed << setprecision(2);

    if (delta == 0) {
        cout << -b / 2 * a;
        return 0;
    }

    if (delta > 0) {
        cout << (-b + sqrt(delta)) / (2 * a) << "\n";
        cout << (-b - sqrt(delta)) / (2 * a);
    }

    return 0;
}