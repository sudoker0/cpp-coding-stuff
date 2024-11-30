#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("BAI1.inp", "r", stdin);
    freopen("BAI1.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;
    string s;
    int a[300];

    l: while (q--) {
        memset(a, 0, sizeof(a));
        cin >> s;
        for (char i: s) {
            a[i - 'a']++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (a[s[i] - 'a'] == 1) {
                cout << i + 1 << "\n";
                goto l;
            }
        }
        cout << -1 << "\n";
    }

    return 0;
}