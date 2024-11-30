#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("sand.inp", "r", stdin);
    freopen("sand.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c;
    long long x, y;
    cin >> a >> b >> c;
    cin >> x >> y;

    long long out = 0;

    if (x < y) {
        swap(x, y);
        swap(b, c);
    }

    long long j = min(a / 2, b);
    out += j * x;
    a -= j * 2;

    long long k = min(a / 2, c);
    out += k * y;

    cout << out;
    return 0;
}