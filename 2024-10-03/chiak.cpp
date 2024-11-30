#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("chiak.inp", "r", stdin);
    freopen("chiak.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, cnt = 0;
    cin >> n >> k;

    int a[n + 1], tmp;
    a[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[i + 1] = a[i] + tmp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            tmp = a[j + 1] - a[i];
            if (tmp % k == 0) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}