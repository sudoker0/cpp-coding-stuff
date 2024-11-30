#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a, a + n, greater<int>());
    sort(b, b + m, greater<int>());

    int p1 = 0, p2 = 0, cnt = 0;

    while (p1 < n && p2 < m) {
        if (abs(a[p1] - b[p2]) <= k) {
            cnt++;
            p1++;
        }
        p2++;
    }

    cout << cnt;

    return 0;
}