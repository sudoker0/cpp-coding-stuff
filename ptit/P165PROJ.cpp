#include <bits/stdc++.h>
using ll = long long;
using namespace std;

const ll MOD109 = 1e9+7;

ll power(ll a, ll b, ll c) {
    if (b == 0) return 1;
    if (b == 1) return a % c;
    if (b % 2 == 0) return power(((a % c) * (a % c)) % c, b / 2, c) % c;
    return ((power(((a % c) * (a % c)) % c, (b - 1) / 2, c) % c) * (a % c)) % c;
}

int main() {
    ll n, m;
    cin >> n >> m;

    ll t = m / n;
    ll e = m % n;

    ll a, b, c;
    if (t > 0) {
        a = ((n % MOD109) * (n + 1) % MOD109) % MOD109; // n * (n + 1)
        a = ((a % MOD109) * power(2, MOD109 - 2, MOD109)) % MOD109; // ... / 2;
        a = ((a % MOD109) * (t % MOD109)) % MOD109; // ... * (m / n);
    }

    if (e > 0) {
        b = ((e % MOD109) * (e + 1) % MOD109) % MOD109;
        b = ((b % MOD109) * power(2, MOD109 - 2, MOD109)) % MOD109;
    }

    c = ((a % MOD109) + (b % MOD109)) % MOD109;
    cout << c;

    return 0;
}