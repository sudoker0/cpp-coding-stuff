#include <bits/stdc++.h>
using namespace std;

int char_to_num(char c) {
    int d = c - '0';
    d *= 2;
    if (d >= 10) {
        d = (d / 10) + (d % 10);
    }
    return d;
}

int main() {
    string s;
    cin >> s;
    string ss;

    int d1 = char_to_num(s[0]), d4 = char_to_num(s[4]);
    for (int i = 1; i < 4; i++) {
        ss += s[i];
    }
    sort(ss.begin(), ss.end());

    cout << d1 << ss << d4;

    return 0;
}