#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, smallest, largest, accum = 0;
    freopen("SUMLE.INP", "r", stdin);
    freopen("SUMLE.OUT", "w", stdout);
    cin >> X >> Y;
    smallest = min(X, Y);
    largest = max(X, Y);
    for (int i = smallest + 1; i < largest; i++)
    {
        if (i % 2 != 0)
        {
            accum += i;
        }
    }
    cout << accum;
    return 0;
}