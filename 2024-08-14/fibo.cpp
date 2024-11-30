#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD109 1000000007

vector<ll> fib(ll n) {
    vector<ll> out;
    if (n == 0) {
        out.push_back(0);
        out.push_back(1);
        return out;
    }

    out = fib(floor(n / 2));
    ll a = out[0], b = out[1];
    ll c = 2 * b - a;
    if (c < 0)
        c += MOD109;

    c = (a * c) % MOD109;
    ll d = (a * a + b * b) % MOD109;

    if (n % 2 == 0) {
        out[0] = c;
        out[1] = d;
    } else {
        out[0] = d;
        out[1] = c + d;
    }
    return out;
}

int main() {
    ll n;
    cin >> n;
    cout << fib(n)[0];
}