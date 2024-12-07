#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("ARCHA.INP", "r", stdin);
    freopen("ARCHA.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;
    string s;
    cin >> s;

    if (k == 1) reverse(s.begin(), s.end());
    int p1 = 0, p2 = 0;
    bool sr = false;
    if (s[s.size() / 2] == s[0]) {
        p2 = s.size() / 2;
        sr = true;
    } else {
        p2 = s.size() / 2 + 1;
    }

    char c = ';';
    while (p2 < s.size()) {
        if (s[p1] == s[p2]) {
            p1++;
            p2++;
        } else {
            if (sr) {
                c = s[p2];
            } else {
                c = s[p1];
            }
            break;
        }
    }

    if (c == ';') c = s[p1];
    cout << c << "\n";

    int _start, _end;
    if (sr) {
        _start = 0;
        _end = s.size() / 2;
    } else {
        _start = s.size() / 2 + 1;
        _end = s.size();
    }

    for (int i = _start; i < _end; i++) cout << s[i];

    return 0;
}

