#include <bits/stdc++.h>
using namespace std;

int n, k, x, m, s;
map<int, set<pair<int, int>>> g;
int w[100001];

void dijkstra(int end) {
    if (s <= k) {
        
    }
}

int main() {
    cin >> n >> k >> x >> m >> s;
    for (int i = 0; i <= 100000; i++) {
        w[i] = INT_MAX;
    }

    int a, b, c;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        g[a].insert(pair<int, int>(b, c));
        g[b].insert(pair<int, int>(a, c));
    }

    if (s <= k) {
        for (int i = 1; i <= k; i++) {
            if (i == s) cout << "0";
            else cout << x;

            cout << " ";
        }
        for (int i = k + 1; i <= n; i++) {
            dijkstra(i);
            cout << " ";
        }
    }

    return 0;
}