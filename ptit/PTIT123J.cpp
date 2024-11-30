#include <bits/stdc++.h>
using namespace std;

char match_p(char c) {
    if (c == ']') return '[';
    if (c == ')') return '(';
    return '\xFF';
}

int main() {
    string s;

    vector<char> q;
    while (getline(cin, s)) {
        if (s == ".") break;
        for (char c: s) {
            if (!(c == '[' || c == '(' || c == ']' || c == ')')) continue;
            if (c == '[' || c == '(') {
                q.push_back(c);
                continue;
            }
            if (q.size() == 0) {
                goto no;
            }
            char t = q.back();
            if (match_p(c) == t) {
                q.pop_back();
                continue;
            } else {
                goto no;
            }
        }

        if (q.size() > 0) goto no;

        cout << "yes\n";
        q.clear();
        continue;

        no:
            cout << "no\n";
            q.clear();
    }

    return 0;
}