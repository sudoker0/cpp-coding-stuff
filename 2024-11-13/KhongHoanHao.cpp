#include <bits/stdc++.h>
using namespace std;

int tonguoc(int n) {
    int out = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            out += i;
            if (i != n / i) out += n / i;
        }
    }

    return out;
}

int main() {
    freopen("KhongHoanHao.inp", "r", stdin);
    freopen("KhongHoanHao.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i < tonguoc(i)) cnt++;
    }

    cout << cnt;
    return 0;
}