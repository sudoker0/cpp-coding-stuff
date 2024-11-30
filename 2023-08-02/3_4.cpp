#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    cout << x * min(k, n) + y * max(n - k, 0);

    return 0;
}