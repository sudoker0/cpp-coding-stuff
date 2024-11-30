#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k;
    cin >> k;
    long long l = 0, r = k * 2;
    while (l < r) {
        long long mid = (l + r) / 2;
        long long out = mid - (long long)sqrt(mid);
        if (out < k) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    cout << l;

    return 0;
}