#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int m[100001];

    for (int i = 0; i <= 100000; i++) m[i] = 0;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        int k = x - a[i] * a[i];
        if (k >= 0) res += m[k];
        m[a[i]]++;
    }

    cout << res;

    return 0;
}