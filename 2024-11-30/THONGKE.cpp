#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    int out = 1;
    for (int i = 0; i < b; i++) out *= a;
    return out;
}

int str_to_num(string s) {
    int out = 0, p = 0;
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++) {
        out += (s[i] - '0') * power(10, p);
        p++;
    }

    return out;
}

int main() {
    freopen("THONGKE.inp", "r", stdin);
    freopen("THONGKE.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) a[i] = 0;

    int highest = INT_MIN;
    for (int k = 0; k < n; k++) {
        cin >> s;

        string buf = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' and s[i] <= '9') buf += s[i];
            else {
                a[k] += str_to_num(buf);
                highest = max(highest, a[k]);

                buf = "";
                i += 2;
            }
        }
    }

    cout << highest << '\n';
    for (int i = 0; i < n; i++) cout << a[i] << "\n";

    return 0;
}