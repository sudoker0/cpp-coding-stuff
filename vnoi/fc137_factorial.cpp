#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    int t, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;

        if (k == 1) {
            cout << "YES\n";
            continue;
        }

        bool isDivBy2 = (n[n.size() - 1] - '0') % 2 == 0;

        if (k == 2) {
            if (isDivBy2) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }

        if (k == 3) {
            if (!isDivBy2) {
                cout << "NO\n";
                continue;
            }

            int sum = 0;
            for (char c: n) {
                sum += c - '0';
            }

            if (sum % 3 != 0) {
                cout << "NO\n";
                continue;
            }

            cout << "YES\n";
            continue;
        }
    }

    return 0;
}