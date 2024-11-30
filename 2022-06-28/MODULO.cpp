#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y;
    freopen("MODULO.INP", "r", stdin);
    freopen("MODULO.OUT", "w", stdout);
    cin >> X >> Y;
    for (int i = min(X, Y) + 1; i < max(X, Y); i++)
    {
        if (abs(i % 5) == 2 or abs(i % 5) == 3)
            cout << i << " ";
    }
}
