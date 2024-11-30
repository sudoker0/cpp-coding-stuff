#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

ll cnt(ll n, ll a, ll b, ll x) {
    ll hcf_ab = lcm(a, b);
    ll div = n / hcf_ab;
    div -= n / lcm(hcf_ab, x);
    return div;
}

int main() {
    ll n, p, q, r;

    while (cin >> n >> p >> q >> r) {
        cout <<
            cnt(n, p, q, r) +
            cnt(n, p, r, q) +
            cnt(n, q, r, p) << "\n";
    }

    return 0;
}