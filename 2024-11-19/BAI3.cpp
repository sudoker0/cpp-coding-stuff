#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("BAI3.inp", "r", stdin);
    freopen("BAI3.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int m;
    cin >> m;

    int s, f;
    while (m--) {
        cin >> s >> f;
        if (s > f) swap(s, f);

        int* p1 = lower_bound(a, a + n, s);
        int* p2 = upper_bound(a, a + n, f);
        cout << p2 - p1 << "\n";
    }

    return 0;
}