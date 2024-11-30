#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, z, w;
    cin >> n >> z >> w;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    if (n == 1) cout << abs(a[n - 1] - w);
    else cout << max(abs(a[n - 1] - w), abs(a[n - 1] - a[n - 2]));

    return 0;
}