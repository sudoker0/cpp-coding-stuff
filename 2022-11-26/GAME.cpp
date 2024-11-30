#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> f, pair<int, int> s)
{
    return f.second > s.second;
}

int main()
{
    freopen("GAME.inp", "r", stdin);
    freopen("GAME.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for (int _ = 0; _ < T; _++)
    {
        int n, tmp;
        cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            a[i] = { i, tmp };
        }
        sort(a, a + n, cmp);

        for (int i = 0; i < n; i++)
        {
            if (a[i].first != 0) continue;
            if (i % 2 == 0) cout << "BOB\n";
            else cout << "ANDY\n";
            break;
        }
    }

    return 0;
}
