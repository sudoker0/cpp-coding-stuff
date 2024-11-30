#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;

char flip(char c) {
    if (c == '0') return '1';
    else return '0';
}

void sub2() {
    // c1: 010101..., c2: 101010...
    // s: 11110001
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (s[i] == '1') c1++;
            else c2++;
        } else {
            if (s[i] == '0') c1++;
            else c2++;
        }
    }

    if (c1 < c2) {
        cout << c1 << "\n";
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) cout << 0;
            else cout << 1;
        }
    } else {
        cout << c2 << "\n";
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) cout << 1;
            else cout << 0;
        }
    }
}

void sub() {
    int op = 0;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1]) r++;
        else {
            int len = r - l + 1;
            if (len > k) {
                while (l < r) {
                    l += k;
                    if (l > r) break;
                    if (s[l] != s[l + 1]) l--;
                    s[l] = flip(s[l]);
                    op++;
                    l++;
                }
            }

            l = i + 1;
            r = i + 1;
        }
    }

    s.pop_back();
    cout << op << "\n" << s;
}

int main() {
    freopen("bina.inp", "r", stdin);
    freopen("bina.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    cin >> s;

    s += ";";

    if (k == 1) sub2();
    else sub();

    return 0;
}