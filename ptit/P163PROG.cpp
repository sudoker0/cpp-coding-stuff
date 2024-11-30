#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, cnt = 0;
    cin >> n >> x;

    for (int i = 1; i * i <= x; i++) {
        if (x % i != 0) continue;
        if (x / i > n) continue;
        if (i > n) break;

        cnt++;
        if (i != x / i) cnt++;
    }

    cout << cnt;
    return 0;
}