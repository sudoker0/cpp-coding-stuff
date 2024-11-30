#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PRIME.INP", "r", stdin);
    freopen("PRIME.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int L, R, count = 0;
    cin >> L >> R;

    vector<bool> prime(R - L + 1, true);

    for (int p = 2; p * p <= R; p++)
    {
        //if (!prime[p]) continue;
        for (int i = max(p * p, ((L + p - 1) / p) * p); i <= R; i += p)
            prime[i - L] = false;
    }

    for (int i = max(L, 2); i <= R; i++)
        if (prime[i - L]) count++;

    cout << count;
    return 0;
}