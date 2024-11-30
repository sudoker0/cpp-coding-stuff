#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll power(ll a, ll b) {
    ll out = 1;
    for (int i = 0; i < b; i++) out *= a;
    return out;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        ll k;
        int digit = 1;
        cin >> k;
        for (int i = 0; i < 17; i++) {
            ll range = 9 * power(10, i) * (i + 1);
            if (k <= range) break;
            k -= range;
            digit++;
        }

        ll num = (k - 1) / digit;
        num += power(10, digit - 1);

        ll num_pos = (k - 1) % digit;
        cout << to_string(num)[num_pos] << "\n";
    }

    return 0;
}