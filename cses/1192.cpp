#include <bits/stdc++.h>
using namespace std;

bool a[1001][1001];
int n, m;

void DFS(int x, int y) {
    if (!a[x][y]) return;
    a[x][y] = false;

    int direction[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (int i = 0; i < 4; i++) {
        int nx = x + direction[i][0];
        int ny = y + direction[i][1];
        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

        DFS(nx, ny);
    }
}

int main() {
    // freopen("rooms.inp", "r", stdin);
    // freopen("rooms.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '.') a[i][j] = true;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j]) {
                DFS(i, j);
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}