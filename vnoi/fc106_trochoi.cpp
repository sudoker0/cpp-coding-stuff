#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    int p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) p1 += a[i];
        else p2 += a[i];
    }

    cout << abs(p1 - p2);

    return 0;
}