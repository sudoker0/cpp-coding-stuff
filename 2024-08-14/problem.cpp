#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a, b, _min, _max;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> a >> b;
        if (a + b <= n) {
            _max = a;
        } else {
            _max = n - b;
        }

        _min = max(a - b, 0);
        cout << _min << " " << _max << "\n";
    }

    return 0;
}