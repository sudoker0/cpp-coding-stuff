#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        int* out = lower_bound(a, a + n, x - a[i]);

        if (*out == x - a[i]) {
            return 0;
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}