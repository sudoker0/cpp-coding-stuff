#include <bits/stdc++.h>
using namespace std;

int _gcd(int a, int b) {
    if (b == 0) return a;
    return _gcd(b, a % b);
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << _gcd(m, n) << endl;
    return 0;
}
