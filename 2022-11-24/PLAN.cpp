#include <bits/stdc++.h>
using namespace std;

int a[1000][1000];
int cnt = 0, largest = 0;
bool visited[1000][1000];

void search_plan(int m, int n, int c, int x, int y)
{
    int direction[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
    for (int i = 0; i < 4; i++)
    {
        int newx = x + direction[i][0];
        int newy = y + direction[i][1];

        if (newx < 0 || newx >= m) continue;
        if (newy < 0 || newy >= n) continue;

        if (a[newx][newy] != c) continue;
        if (visited[newx][newy]) continue;

        cnt++;
        visited[newx][newy] = true;
        search_plan(m, n, c, newx, newy);
    }
}

int main()
{
    freopen("PLAN.inp", "r", stdin);
    freopen("PLAN.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n, k = 0;
    cin >> m >> n;

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j]) continue;
            search_plan(m, n, a[i][j], i, j);
            if (cnt == 0) cnt = 1;
            if (cnt > largest) largest = cnt;
            cnt = 0;
            k++;
        }
    }

    cout << k << "\n" << largest;

    return 0;
}
