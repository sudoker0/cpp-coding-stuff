#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string u, p;
    map<string, string> data;
    map<string, int> cnt;

    cin >> n;
    string user[n];
    for (int i = 0; i < n; i++) {
        cin >> u >> p;
        user[i] = u;
        data[u] = p;
        cnt[u] = 0;
    }

    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> u >> p;
        if (data.find(u) != data.end() && data[u] == p) {
            cnt[u]++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << cnt[user[i]] << " ";
    }

    return 0;
}