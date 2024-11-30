#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    long long n, d, total, tmp, a, b;
    cin >> q;
    for (int _ = 0; _ < q; _++) {
        cin >> n >> d;
        total = 0;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            total += tmp;
        }

        if (n % 2 != 0) n++;
        if (total <= n / 2 * d) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}