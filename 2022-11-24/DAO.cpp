#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int plot[100][100];
bool visited[100][100];
bool good = true;

void search_dao(int m, int n, int c, int x, int y)
{
    if ((x == 0 || y == 0 || x == m - 1 || y == n - 1) && good)
        good = false;
    
    int direction[8][2] =
    {
        { -1, 1 },
        { 0, -1 },
        { 1, -1 },
        { -1, 0 },
        { 1, 0 },
        { -1, -1 },
        { 0, 1 },
        { 1, 1 }
    };

    for (int i = 0; i < 8; i++)
    {
        int newx = x + direction[i][0];
        int newy = y + direction[i][1];

        if (newx < 0 || newx >= m) continue;
        if (newy < 0 || newy >= n) continue;

        if (plot[newx][newy] != c) continue;
        if (visited[newx][newy]) continue;

        visited[newx][newy] = true;
        search_dao(m, n, c, newx, newy);
    }
}

int main()
{
    freopen("DAO.inp", "r", stdin);
    freopen("DAO.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    memset(visited, false, sizeof(visited));
    int m, n, cnt = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> plot[i][j];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j]) continue;
            if (plot[i][j] == 0)
            {
                visited[i][j] = true;
                continue;
            }
            search_dao(m, n, plot[i][j], i, j);
            if (!good)
            {
                good = true;
                continue;
            }
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
