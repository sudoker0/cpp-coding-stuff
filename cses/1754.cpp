#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if ((a + b) % 3 == 0) {
            int av = (a + b) / 3;
            a = av * 2;
            b = av;

            int x = a / 2;
            a -= x * 2;
            b -= x;

            if ((a == 1 && b == 2) || ((a == 2 && b == 1)) || (a == 0 && b == 0)) cout << "YES\n";
        } else cout << "NO\n";
    }

    return 0;
}