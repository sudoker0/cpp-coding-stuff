#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int T1, T2, T3, T4;
    freopen("OCAM.INP", "r", stdin);
    freopen("OCAM.OUT", "w", stdout);

    cin >> T1 >> T2 >> T3 >> T4;

    cout << (T1 - 1) + (T2 - 1) + (T3 - 1) + T4;
    // cout << T1 + T2 + T3 + T4 - 3;
    return 0;
}