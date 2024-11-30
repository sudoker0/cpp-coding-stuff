#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, X, Y, total = 0;

    freopen("ODD.INP", "r", stdin);
    freopen("ODD.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (long long i = 0; i < N; i++)
    {
        cin >> X >> Y;
        if (X % 2 == 0) X++;
        for (long long t = 0; t < Y; t++)
        {
            total += X + 2 * t;
        }
        cout << total << "\n";
        total = 0;
    }
    return 0;
}