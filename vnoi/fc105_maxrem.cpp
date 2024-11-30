#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    int v_max = 0;
    for (int i = 0; i < n - 1; i++) {
        v_max = max(v_max, a[i] % a[i + 1]);
    }

    cout << v_max;

    return 0;
}