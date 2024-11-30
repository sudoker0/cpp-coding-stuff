#include <bits/stdc++.h>
using namespace std;

long long h[100001];
long long s[100001];
long long n, a, r, m;

long long f(long long x) {
    long long i = lower_bound(h + 1, h + 1 + n, x) - h;
    long long p = (i - 1) * x - s[i - 1];
    long long q = s[n] - s[i - 1] - (n - i + 1) * x;
    long long z = min(p, q);
    p -= z;
    q -= z;
    return p * a + q * r + z * m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> a >> r >> m;
    for (long long i = 1; i <= n; i++) cin >> h[i];

    m = min(m, a + r);
    sort(h + 1, h + 1 + n);
    s[0] = 0;
    for (long long i = 1; i <= n; i++)
        s[i] = s[i - 1] + h[i];

    long long l = h[1], r = h[n];
    while (r - l >= 3) {
        long long m1 = l + (r - l) / 3, m2 = r - (r - l) / 3;
        if (f(m1) > f(m2)) l = m1;
        else r = m2;
    }
    long long ans = LONG_LONG_MAX;
    for (long long x = l; x <= r; x++)
        ans = min(ans, f(x));
    cout << ans;

    return 0;
}