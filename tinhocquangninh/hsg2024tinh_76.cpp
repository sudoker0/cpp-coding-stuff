#include <bits/stdc++.h>
using namespace std;

int a[26], smallest = INT_MAX;

bool check() {
    for (int i = 0; i < 26; i++) {
        if (a[i] <= 0) return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    memset(a, 0, sizeof(a));
    int l = 0, r = 0;

    a[s[0] - 'A']++;
    while (r < s.size()) {
        if (check()) {
            smallest = min(smallest, r - l + 1);
            a[s[l] - 'A']--;
            l++;
        } else {
            r++;
            a[s[r] - 'A']++;
        }
    }

    cout << smallest;

    return 0;
}