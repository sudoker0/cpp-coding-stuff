#include <bits/stdc++.h>
#include <fstream>
#include <math.h>
using namespace std;
const float PI = 3.141592653589793;
int main()
{
    int R;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("CIRCLE.inp", "r", stdin);
    freopen("CIRCLE.out", "w", stdout);
    cin >> R;
    cout << fixed << setprecision(4);
    cout << R * 2 * PI << " " << PI * pow(R, 2);
    return 0;
}