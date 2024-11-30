#include <bits/stdc++.h>
using namespace std;

map< int, vector<int> > g;
vector<int> result;
set<int> visited;

void trace(int start, int end, int cnt = 0) {
    if (start == end) {
        result.push_back(cnt);
        return;
    }

    if (visited.find(start) != visited.end()) return;
    visited.insert(start);
    for (auto i: g[start]) {
        int n = cnt + 1;
        trace(i, end, n);
    }
}

int main() {
    int t, n, m, u, v;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> n >> m;
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<int> k;
        for (auto i: g) {
            k.push_back(i.first);
        }

        for (int i = 0; i < k.size() - 1; i++) {
            for (int j = i + 1; j <= k.size(); j++) {
                result.clear();
                visited.clear();
                trace(k[i], k[j]);

                bool has_even = false, has_odd = false;
                for (auto i: result) {
                    has_even = has_even | (i % 2 == 0);
                    has_odd = has_odd | (i % 2 == 1);
                }
                if (has_even && has_odd) {
                    cout << "YES\n";
                    goto main;
                }
            }
        }
        cout << "NO\n";
        main: {}
    }

    return 0;
}