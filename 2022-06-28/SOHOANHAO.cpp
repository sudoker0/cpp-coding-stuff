#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, X, accum = 0;
    freopen("SOHOANHAO.INP", "r", stdin);
    freopen("SOHOANHAO.OUT", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        X = 0;
        accum = 0;
        cin >> X;
        for (int j = 1; j <= X / 2; j++)
            if (X % j == 0)
                    accum += j;
        if (X == accum)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}