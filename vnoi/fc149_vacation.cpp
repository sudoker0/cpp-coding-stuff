#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    string f = "", tmp;
    for (int i = 0; i < n; i++) {
        if (i == 0) cin >> f;
        else {
            cin >> tmp;
            for (int i = 0; i < d; i++) {
                if (f[i] == 'x' || tmp[i] == 'x') f[i] = 'x';
            }
        }
    }

    f += 'x';

    int max_len = 0, cur = 0;
    for (char c: f) {
        if (c == 'o') {
            cur++;
        } else {
            max_len = max(max_len, cur);
            cur = 0;
        }
    }

    cout << max_len;
    return 0;
}