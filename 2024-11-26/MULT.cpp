#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    freopen("mult.inp", "r", stdin);
    freopen("mult.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;
    while (k--) {
        ll n, x;
        cin >> n >> x;
        cout << x / n << "\n";
    }

    return 0;
}