#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("FACTORK.INP", "r", stdin);
    freopen("FACTORK.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N, K, f, sz;
    vector<int> factor;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        factor.clear();
        cin >> N >> K;
        while (N % 2 == 0) // Find all 2 factor
        {
            factor.push_back(2);
            N /= 2;
        }

        f = 3;
        while (f * f <= N)
        {
            if (N % f == 0)
            {
                factor.push_back(f);
                N /= f;
            }
            else f += 2;
        }

        if (N != 1) factor.push_back(N);

        sz = factor.size();

        if (K > sz) cout << -1 << '\n';
        else cout << factor[K - 1] << '\n';
    }
    return 0;
}