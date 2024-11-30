#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    vector<int> b;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i += 2) {
        b.emplace_back(a[i]);
    }
    for (int i = 1; i < n; i += 2) {
        b.emplace_back(a[i]);
    }

    int out = 0;
    for (int i = 0; i < n - k; i++) {
        out += abs(b[i] - b[i + k]);
    }

    cout << out;

    return 0;
}