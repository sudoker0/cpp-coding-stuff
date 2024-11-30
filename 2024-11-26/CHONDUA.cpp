#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    freopen("CHONDUA.inp", "r", stdin);
    freopen("CHONDUA.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(b, b + n);

    ll sum = 0;

    for (int i = 0; i < n; i++) {
        int* p1 = lower_bound(b, b + n, a[i]);
        int* p2 = upper_bound(b, b + n, a[i]);
        sum += n - (ll)(p2 - p1);
    }

    cout << sum;

    return 0;
}