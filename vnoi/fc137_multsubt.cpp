#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, k, cnt = 0;
    vector<long long> out;
    cin >> x >> k;
    while (x != 1) {
        if (x % k == 0) {
            x /= k;
            out.emplace_back(1);
        }
        else {
            x++;
            out.emplace_back(2);
        }
        cnt++;
    }

    cout << cnt << "\n";
    for (long long i: out) cout << i << " ";

    return 0;
}