#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll MOD109 = 1e9+7;

int main() {
    ll n;
    cin >> n;

    ll f[n + 1];
    f[1] = 3;
    f[2] = 8;

    for (ll i = 3; i <= n; i++) {
        f[i] = ((f[i - 1] % MOD109) + (f[i - 2] % MOD109)) % MOD109;
        f[i] = (2 * f[i]) % MOD109;
    }

    cout << f[n];

    return 0;
}