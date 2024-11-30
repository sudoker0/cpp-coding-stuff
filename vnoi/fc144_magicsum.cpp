#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll n, a, b, sum = 0;
    cin >> n;

    while (n--) {
        cin >> a >> b;
        sum += b * (b + 1) / 2;
        sum -= (a - 1) * a / 2;
    }

    cout << sum;

    return 0;
}