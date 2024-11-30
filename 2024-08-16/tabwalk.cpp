#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;

    ll min_value = LLONG_MAX;

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            min_value = min(i + n / i - 2, min_value);
        }
    }

    if (min_value == LLONG_MAX) {
        cout << n - 1;
    } else {
        cout << min_value;
    }

    return 0;
}