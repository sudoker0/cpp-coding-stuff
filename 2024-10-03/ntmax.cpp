#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    int out = 1;
    for (int i = 0; i < b; i++) {
        out *= a;
    }
    return out;
}

int str_to_num(string s) {
    int n = 0, p = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        n += (s[i] - '0') * power(10, p);
        p++;
    }
    return n;
}

bool prime[10000001];

int main() {
    freopen("ntmax.inp", "r", stdin);
    freopen("ntmax.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= 10000000; i++) {
        if (!prime[i]) continue;
        for (int j = i * 2; j <= 10000000; j += i) prime[j] = false;
    }

    string s;
    cin >> s;
    int cnt = 0, prim_max = 0;

    vector<int> prim;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' and s[i] <= '9') cnt++;
    }

    s += ";";

    string buf = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' and s[i] <= '9') {
            buf.push_back(s[i]);
        } else {
            if (buf != "")
                prim.push_back(str_to_num(buf));
            buf = "";
        }
    }

    for (auto i: prim) {
        if (prime[i]) {
            prim_max = max(prim_max, i);
        }
    }

    cout << cnt << "\n" << prim_max;

    return 0;
}