#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, tmp;
    map<int, set<int>> g;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tmp;
            if (tmp == 1) {
                g[i + 1].insert(j + 1);
                g[j + 1].insert(i + 1);
            }
        }
    }

    for (auto i: g) {
        for (auto j: i.second) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}