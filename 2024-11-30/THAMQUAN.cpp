#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("THAMQUAN.inp", "r", stdin);
    freopen("THAMQUAN.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    ll a[n + 1], b;
    a[0] = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i + 1];
        a[i + 1] += a[i];
    };
    for (ll i = 0; i < m; i++) {
        cin >> b;

        int l = 1, r = n;
        while (l < r) {
            int mid = (l + r) / 2;
            if (a[mid] <= b) {
                l = mid + 1;
            } else if (a[mid] > b) {
                r = mid;
            }
        }

        if (a[l] <= b) {
            cout << l << " ";
        } else {
            cout << l - 1 << " ";
        }
    }

    return 0;
}