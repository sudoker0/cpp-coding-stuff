#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, tmp;
    cin >> n;
    long long a[n + 1];
    a[0] = 0;
    for (long long i = 0; i < n; i++) {
        cin >> tmp;
        a[i + 1] = a[i] + tmp;
    }

    long long out = INT_MAX;
    for (long long i = 1; i < n; i++) {
        long long p1 = a[i] - a[0];
        long long p2 = a[n] - a[i];
        out = min(out, abs(p1 - p2));
    }

    cout << out;

    return 0;
}