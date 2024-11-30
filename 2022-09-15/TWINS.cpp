#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TWINS.INP", "r", stdin);
    freopen("TWINS.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, cnt = 0;
    cin >> n >> k;
    bool prime[2000001];
    memset(prime, true, sizeof(prime));
    prime[1] = false;
    prime[0] = false;
    for (int i = 2; i * i <= 2000001; i++)
    {
        if (!prime[i]) continue;
        for (int j = 2 * i; j <= 2000001; j += i) prime[j] = false;
    }

    for (int i = 2; i <= n - k; i++)
    {
        if (prime[i] and prime[i + k]) cnt++;
    }

    cout << cnt;
    return 0;
}