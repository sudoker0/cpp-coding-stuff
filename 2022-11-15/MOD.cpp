#include <bits/stdc++.h>
#define ull unsigned long long
const int mod = 1000000007;
using namespace std;

int main()
{
    freopen("MOD.INP", "r", stdin);
    freopen("MOD.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, n;
    ll S = 0;

    cin >> a >> n;

    for (int i = 1; i <= n; i++)
    {
        S += a * i;
        S %= mod;
    }

    cout << S;
    return 0;
}
