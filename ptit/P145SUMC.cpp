#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    set<int> div;
    int n = min(a, b);
    div.insert(1);
    for (int i = 2; i * i <= n; i++) {
        if (a % i == 0 && b % i == 0) {
            div.insert(i);
            div.insert(a / i);
            div.insert(b / i);
        }
    }

    int m, l, r;
    cin >> m;
    while (m-- > 0) {
        cin >> l >> r;
        auto it = upper_bound(div.begin(), div.end(), l);
        if (it == div.end()) cout << -1;
        else if ((*it) < r) cout << (*it);
        else cout << -1;
        cout << "\n";
    }

    return 0;
}