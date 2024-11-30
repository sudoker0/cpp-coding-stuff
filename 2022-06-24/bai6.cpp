#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int m, n;
    freopen("BT306.inp", "r", stdin);
    freopen("BT306.out", "w", stdout);
    cin >> m >> n;
    if (m % n == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}