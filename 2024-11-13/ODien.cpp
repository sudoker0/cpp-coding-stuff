#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("ODien.inp", "r", stdin);
    freopen("ODien.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<int>());

    int cnt = 0, out = 0;
    for (int i = 0; i < n; i++) {
        out++;
        if (a[i] < m - cnt) {
            cnt += a[i] - 1;
        } else {
            cout << out;
            return 0;
        }
    }

    cout << -1;
    return 0;
}