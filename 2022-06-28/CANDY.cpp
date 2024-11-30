#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, tong = 1;
    freopen("CANDY.INP", "r", stdin);
    freopen("CANDY.OUT", "w", stdout);
    cin >> A >> B >> C;
    if (A + B == C or A + C == B or B + C == A)
        cout << "Yes";
    else
        cout << "No";
}
