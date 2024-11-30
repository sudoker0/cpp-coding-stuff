#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    bool num[32001];
    memset(num, false, sizeof(num));

    for (ll i = 0; i * i <= 1000000000; i++) {
        ll m = 2 * (i * i - 1);
        ll tmp = 4 * m + 1;
        ll sq_tmp = sqrt(tmp);
        if (sq_tmp * sq_tmp == tmp) {
            num[i] = true;
        }
    }

    ll a, b;
    cin >> a >> b;
    while (a != 0 && b != 0) {
        ll start = ceil(sqrt(a + 1));
        if (start * start <= b) {

        }

        cin >> a >> b;
    }

    return 0;
}