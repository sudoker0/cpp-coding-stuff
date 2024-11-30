#include <bits/stdc++.h>
using namespace std;

int a[102][102];
bool visited[102][102];
int coord[4][2] = { {-1, 0}, {0, -1}, {1, 0}, {0, 1} };

int height = 0;
int cnt_zero = 0;
int cnt_tland = 0;
int tx = 0, ty = 0;

void flood(int x, int y, int n, int m) {
    for (int i = 0; i < 4; i++) {
        int nx = x + coord[i][0], ny = y + coord[i][1];
        if (nx < 0 || ny < 0 || nx >= n + 2 || ny >= m + 2) continue;
        if (visited[nx][ny]) continue;

        visited[nx][ny] = true;
        a[nx][ny] = max(0, a[nx][ny] - 1);
        if (a[nx][ny] == 0) flood(nx, ny, n, m);
    }
}

void traverse_zero(int n, int m) {
    for (int i = 0; i < n + 2; i++)
        for (int j = 0; j < m + 2; j++)
            if (a[i][j] == 0) cnt_zero++;
}

void traverse(int x, int y, int n, int m) {
    for (int i = 0; i < 4; i++) {
        int nx = x + coord[i][0], ny = y + coord[i][1];
        if (nx < 0 || ny < 0 || nx >= n + 2 || ny >= m + 2) continue;
        if (visited[nx][ny]) continue;
        if (a[nx][ny] == 0) continue;

        visited[nx][ny] = true;
        cnt_tland++;
        traverse(nx, ny, n, m);
    }
}

int main() {
    int n, m, cnt_case = 0;
    cin >> n >> m;
    while (n != 0 || m != 0) {
        cnt_case++;
        height = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) cin >> a[i][j];

        for (int i = 0; i < n + 2; i++) {
            a[i][0] = 0;
            a[i][m + 1] = 0;
        }

        for (int i = 0; i < m + 2; i++) {
            a[0][i] = 0;
            a[n + 1][i] = 0;
        }

        do {
            cnt_zero = 0;
            for (int i = 0; i < n + 2; i++)
                for (int j = 0; j < m + 2; j++) visited[i][j] = false;
            flood(0, 0, n, m);
            height++;

            cnt_tland = 0;
            for (int i = 0; i < n + 2; i++)
                for (int j = 0; j < m + 2; j++) {
                    visited[i][j] = false;
                    if (a[i][j] != 0) {
                        tx = i;
                        ty = j;
                    }
                }
            traverse_zero(n, m);
            traverse(tx, ty, n, m);
        } while (cnt_zero + cnt_tland == (n + 2) * (m + 2) && cnt_tland != 0);

        cout << "Case " << cnt_case << ": ";
        if (cnt_tland == 0) {
            cout << "Island never splits.\n";
        } else {
            cout << "Island splits when ocean rises " << height << " feet.";
        }

        cin >> n >> m;
    }

    return 0;
}