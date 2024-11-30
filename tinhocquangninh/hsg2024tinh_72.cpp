#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cur = 0, cnt_a = 0, cnt_b = 0;
    for (char c: s) {
        if (c == '+') cur++;
        else cur--;

        cnt_a = max(cnt_a, cur);
        cnt_b = min(cnt_b, cur);
    }

    cout << max(cnt_a, abs(cnt_b));

    return 0;
}