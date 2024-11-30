#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD109 = 1e9+7;

ll power(ll a, ll b, ll c) {
    if (b == 0) return 1;
    if (b == 1) return a % c;
    if (b % 2 == 0) return power(((a % c) * (a % c)) % c, b / 2, c) % c;
    return ((power(((a % c) * (a % c)) % c, (b - 1) / 2, c) % c) * (a % c)) % c;
}

int main() {
    freopen("MOD.inp", "r", stdin);
    freopen("MOD.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a, n;
    cin >> a >> n;

    ll sum = ((n % MOD109) * ((n + 1) % MOD109)) % MOD109;
    sum = ((sum % MOD109) * (power(2, MOD109 - 2, MOD109) % MOD109)) % MOD109;

    sum = ((sum % MOD109) * (a % MOD109)) % MOD109;

    cout << sum;

    return 0;
}