#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int k;
    cin >> k;

    if (t.size() != k * s.size()) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < t.size(); i++) {
        if (t[i] != s[i % s.size()]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}