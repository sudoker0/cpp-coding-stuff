#include <bits/stdc++.h>
using namespace std;

int main() {
    int t_;
    cin >> t_;
    for (int _ = 0; _ < t_; _++) {
        int n, m, p, q, t;
        cin >> n >> m >> p >> q >> t;
        int s_a = n / (t / p);
        int s_b = m / (t / q);

        int extra_a = n % s_a;
        int extra_b = m % s_b;
        int extra = 0;
        if (extra_a == 0 and extra_b == 0) {
            extra = 0;
        }
        else if (extra_a * p + extra_b * q <= t) {
            extra = 1;
        } else {
            extra = 2;
        }
        cout << s_a + s_b + extra << "\n";
    }

    return 0;
}