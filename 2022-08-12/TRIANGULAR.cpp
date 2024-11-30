#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TRIANGULAR.INP", "r", stdin);
    freopen("TRIANGULAR.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N, delta, x1, x2;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        N *= 2;
        // e(e + 1) = n
        // => e ^ 2 + e = n
        // => 1e^2 + 1e - n = 0 (a = 1, b = 1, c = n)
        //  - delta = a ^ 2 - 4 * a * c
        //  - e1 = (-b + sqrt(delta)) / 2a
        //  - e2 = (-b - sqrt(delta)) / 2a
        // stn(n) = n(n + 1) / 2
        delta = 1 - 4 * -N;
        if (delta < 0)
        {
            cout << 0;
            continue;
        }
        x1 = (-1 + sqrt(delta)) / 2;
        x2 = (-1 - sqrt(delta)) / 2;
        if (x1 * (x1 + 1) == N or x2 * (x2 + 1) == N) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}