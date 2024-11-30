#include <bits/stdc++.h>
#define MOD 2147483647
using namespace std;

int n;
bool b[1000][1000];
bool visited[1000][1000];
long long board[1001][1001];
bool path = false;

void DFS(int x, int y) {
    if (x == n - 1 && y == n - 1) {
        path = true;
        return;
    }
    int direction[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
    for (int i = 0; i < 4; i++) {
        int nx = x + direction[i][0], ny = y + direction[i][1];
        if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
        if (!b[nx][ny]) continue;
        if (visited[nx][ny]) continue;

        visited[nx][ny] = true;
        DFS(nx, ny);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++) board[i][j] = 0;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == '.') b[i][j] = true;
            else {
                b[i][j] = false;
                board[i + 1][j + 1] = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (!b[i - 1][j - 1]) continue;
            if (i == 1 && j == 1)
                board[i][j] = 1;
            else
                board[i][j] = ((board[i - 1][j] % MOD) + (board[i][j - 1] % MOD)) % MOD;
        }
    }

    if (board[n][n] == 0) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) visited[i][j] = false;
        DFS(0, 0);

        if (path) {
            cout << "THE GAME IS A LIE";
        } else {
            cout << "INCONCEIVABLE";
        }
    } else {
        cout << board[n][n];
    }

    return 0;
}