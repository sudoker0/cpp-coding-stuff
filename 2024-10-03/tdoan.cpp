#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("tdoan.inp", "r", stdin);
    freopen("tdoan.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, tmp;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0, l = 0, r = 0, max_len = INT_MAX, d = 0;
    while (l < n && r < n) {
        if (sum < k) {
            sum += a[r];
            r++;
        } else if (sum > k) {
            sum -= a[l];
            l++;
            r = max(l, r);
        } else {
            max_len = min(max_len, r - l);
            d = l + 1;
            sum -= a[l];
            l++;
            r = max(l, r);
        }
    }

    if (sum == k) {
        max_len = min(max_len, r - l);
        d = l + 1;
    }

    if (max_len == INT_MAX) {
        cout << 0;
        return 0;
    }

    cout << d << " " << max_len;

    return 0;
}