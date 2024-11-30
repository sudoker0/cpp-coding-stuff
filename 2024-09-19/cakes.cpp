#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    // freopen("cakes.inp", "r", stdin);
    // freopen("cakes.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll s, n;
    cin >> s >> n;
    ll t[n];
    for (int i = 0; i < n; i++) cin >> t[i];

    ll l = 1, r = 500 * s, mid;
    ll res = 0, out = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        res = 0;
        for (int i = 0; i < n; i++) {
            res += mid / t[i];
        }

        if (res >= s) {
            out = mid;
            r = mid - 1;
        } else if (res < s) {
            l = mid + 1;
        }
    }

    cout << out;

    return 0;
}