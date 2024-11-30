#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << 0;
        return 0;
    }

    int b[n - 1], a[n];
    for (int i = 0; i < n - 1; i++) cin >> b[i];

    a[0] = b[0];
    a[1] = b[0];

    for (int i = 1; i < n - 1; i++) {
        if (b[i] <= a[i]) {
            a[i] = b[i];
        }
        a[i + 1] = b[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    cout << sum;

    return 0;
}