#include <bits/stdc++.h>
using namespace std;

struct leak {
    int x;
    int y;
    int h;
};

int m, n;
int a[101][101];
int direction[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool visited[101][101];
int highest = 0;
int cnt_water = 0;
vector<leak> l;

bool compare(leak a, leak b) {
    return a.h < b.h;
}

void DFS(int x, int y, int h, int cur_height) {
    visited[x][y] = true;
    cnt_water -= highest - h;
    for (int i = 0; i < 4; i++) {
        int nx = x + direction[i][0], ny = y + direction[i][1];
        if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
        if (visited[nx][ny]) continue;
        if (a[nx][ny] == highest) continue;

        DFS(nx, ny, a[nx][ny], max(a[nx][ny], cur_height));
    }
} 

int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            visited[i][j] = false;
            cin >> a[i][j];
            highest = max(highest, a[i][j]);
        }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cnt_water += highest - a[i][j];

            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
                if (highest != a[i][j]) {
                    leak _l;
                    _l.x = i;
                    _l.y = j;
                    _l.h = a[i][j];
                    l.push_back(_l);
                }
        }

    sort(l.begin(), l.end(), compare);
    for (auto i: l) {
        if (visited[i.x][i.y]) continue;
        DFS(i.x, i.y, i.h, i.h);
    }

    cout << cnt_water;

    return 0;
}