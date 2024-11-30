#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);
    int v_min = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        v_min = min(v_min, abs(a[i] - a[i + 1]));
    }

    cout << v_min;

    return 0;
}