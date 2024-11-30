#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, K, X, Y;
    freopen("HOTEL.INP", "r", stdin);
    freopen("HOTEL.OUT", "w", stdout);

    cin >> N >> K >> X >> Y;

    if (N > K)
    {
        cout << K * X + (N - K) * Y;
    }
    else
    {
        cout << N * X;
    }
    return 0;
}