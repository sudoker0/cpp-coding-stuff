#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int m;
    cin >> m;
    bool a[200001];
    for (int i = 0; i <= 200000; i++) a[i] = false;

    int tmp;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        a[tmp - 1] = true;
    }

    bool doSwap = false;
    for (int i = 0; i < s.size(); i++) {
        if (a[i] || a[s.size() - i]) {
            doSwap = !doSwap;
        }

        if (doSwap) {
            cout << s[s.size() - i - 1];
        } else {
            cout << s[i];
        }
    }

    return 0;
}