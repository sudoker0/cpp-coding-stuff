#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' || s[i] == '1') continue;
        cnt++;
    }
    cout << cnt;
    return 0;
}