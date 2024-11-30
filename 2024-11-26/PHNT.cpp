#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
string s;

bool check(int size) {
    set<string> s_set;
    string ss;
    for (int i = 0; i <= n - size; i++) {
        ss = s.substr(i, size);
        if (s_set.find(ss) == s_set.end()) {
            s_set.insert(ss);
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    freopen("PHNT.inp", "r", stdin);
    freopen("PHNT.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> s;

    int l = 1, r = n, mid;
    while (l < r) {
        mid = (l + r) / 2;
        if (check(mid)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << l;

    return 0;
}