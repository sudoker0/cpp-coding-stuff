#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> m;
bool visited[5001];

bool canTraverse(int _start, int _end) {
    memset(visited, false, sizeof(visited));
    queue<int> q;
    q.push(_start);
    while (!q.empty()) {
        int n = q.front();
        q.pop();
        if (visited[n]) continue;
        if (n == _end) return true;
        visited[n] = true;
        for (auto i: m[n]) q.push(i);
    }
    return false;
}

int traverse(int _start, int _end) {
    memset(visited, false, sizeof(visited));
    queue<int> q;
    int len = 0;
    q.push(_start);
    while (!q.empty()) {
        int n = q.front();
        q.pop();
        if (visited[n]) continue;
        if (n == _end) break;
        visited[n] = true;
        for (auto i: m[n]) q.push(i);
        len++;
    }
    return len;
}

int main() {
    freopen("MAZE.INP", "r", stdin);
    freopen("MAZE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == '1')
                m[i].push_back(j);
        }
    }

    int out = INT_MAX;

    for (int i = 0; i < n; i++) {
        bool c1 = canTraverse(0, i);
        bool c2 = canTraverse(n - 1, i);
        if (c1 && c2) {
            out = min(out, max(traverse(0, i), traverse(n - 1, i)));
        }
    }

    cout << out;

    return 0;
}
