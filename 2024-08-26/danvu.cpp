#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a, a + n, greater<int>());
    sort(b, b + m, greater<int>());

    int pa = 0, pb = 0;
    while (pa < n && pb < m) {
        if (a[pa] > b[pb]) {
            cnt++;
            pa++;
        }
        pb++;
    }

    cout << cnt;
    return 0;
}