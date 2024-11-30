#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll a, b, k;
    cin >> a >> b >> k;

    double x = b * log10(a);
    double x_frac = x - floor(x);
    double l = pow(10, x_frac);
    ll result = static_cast<ll>(l * pow(10, k - 1));

    cout << result;

    return 0;
}