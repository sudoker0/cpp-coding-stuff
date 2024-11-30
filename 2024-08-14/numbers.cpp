#include <bits/stdc++.h>
using namespace std;

int a[5000001];

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i <= n; i++) a[i] = i;
    for (int i = 2; i <= n / 2; i++) {
        if (i == a[i]) {
            for (int j = i * 2; j <= n; j += i) a[j] = i;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] <= k) cnt++;
    }
    cout << cnt;
    return 0;
}