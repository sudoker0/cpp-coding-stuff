#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= 1000000; i++) {
        if (!prime[i]) continue;
        for (int j = i * 2; j <= 1000000; j += i) prime[j] = false;
    }

    int n;
    cin >> n;
    ll x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        ll sqrt_x = sqrt(x);
        if (sqrt_x * sqrt_x == x && prime[sqrt_x]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}