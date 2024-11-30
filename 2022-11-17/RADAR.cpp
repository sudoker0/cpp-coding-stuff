#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("radar.inp", "r", stdin);
    freopen("radar.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n, k, p, q, r, cnt = 0;
    cin >> m >> n >> k;
    int sh[m][n];
    memset(sh, 0, sizeof(sh));
    for (int i = 0; i < k; i++)
    {
        cin >> p >> q >> r;
        int s1 = max(p - r - 1, 0), e1 = min(p + r - 1, m - 1);
        int s2 = max(q - r - 1, 0), e2 = min(q + r - 1, n - 1);
        for (int x = s1; x <= e1; x++)
            for (int y = s2; y <= e2; y++)
                sh[x][y] = 1;
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (sh[i][j] == 0) cnt++;

    cout << cnt;

    return 0;
}
