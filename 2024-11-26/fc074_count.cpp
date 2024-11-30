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
    ll n;
    cin >> n;
    cout << power(3, n - 1, MOD109) % MOD109;

    return 0;
}