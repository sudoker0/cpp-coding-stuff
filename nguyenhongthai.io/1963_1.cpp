#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int out = a[0];
    for (int i = 1; i < n; i++) {
        out = (out + a[i]) / 2;
    }
    cout << out;

    return 0;
}