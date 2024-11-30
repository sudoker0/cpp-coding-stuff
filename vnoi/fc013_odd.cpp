#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    map<int, int> m;
    while (n--) {
        cin >> tmp;
        m[tmp]++;
    }

    for (auto i: m) {
        if (i.second % 2 == 1) {
            cout << i.first;
            return 0;
        }
    }

    return 0;
}