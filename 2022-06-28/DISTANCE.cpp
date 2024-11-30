#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    freopen("DISTANCE.INP", "r", stdin);
    freopen("DISTANCE.OUT", "w", stdout);

    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(4);
    cout << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return 0;
}