#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("pass.inp", "r", stdin);
    freopen("pass.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<long long>());

    cout << (a[0] - a[n - 2]) * (a[1] - a[n - 1]);

    return 0;
}