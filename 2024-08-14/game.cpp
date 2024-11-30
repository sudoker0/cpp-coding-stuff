#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        int n, m;
        cin >> n >> m;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a, a + n);
        sort(b, b + n, greater<int>());

        int t_a = 0, t_b = 0;
        for (int i = 0; i < m; i++) {
            t_a += a[i];
            t_b += b[i];
        }

        if (t_a > t_b) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}