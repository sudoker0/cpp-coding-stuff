#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int v[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> a[i][j];

    for (int i = 0; i < n; i++) {
        int v1 = 0, v2 = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] >= 0) {
                v1 += a[i][j];
            } else {
                v2 += abs(a[i][j]);
            }
        }
        v[i] = max(v1, v2);
    }
    sort(v, v + n, greater<int>());
    cout << v[0] + v[1];

    return 0;
}