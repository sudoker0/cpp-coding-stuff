#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n;
    cin >> n;
    cin.ignore(32000, '\n');
    while (n-- > 0) {
        string s;
        getline(cin, s);
        ll cur_depth = 0, max_depth = 0;
        for (char c: s) {
            if (c == '[') cur_depth++;
            if (c == ']') cur_depth--;
            max_depth = max(max_depth, cur_depth);
        }

        ll out = 1;
        for (int i = 0; i < max_depth; i++) out *= 2;
        cout << out << "\n";
    }

    return 0;
}