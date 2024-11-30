#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CODI.inp", "r", stdin);
    freopen("CODI.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, limit = 0;
    cin >> T;
    pair<int, int> test[T];
    for (int i = 0; i < T; i++)
    {
        cin >> test[i].first >> test[i].second;
        if (limit < test[i].second) limit = test[i].second;
    }
    vector<int> a;
    a.push_back(1);

    while (a[a.size() - 1] <= limit)
    {
        int ud = 2, n = a[a.size() - 1];
        if (n == 1) ud = 1;
        for (int j = 2; j * j <= n; j++)
        {
            if (n % j == 0)
            {
                ud++;
                if (j != n / j) ud++;
            }
        }
        a.push_back(n + ud);
    }

    for (int i = 0; i < T; i++)
    {
        int f = -1, s = -1, x = test[i].first, y = test[i].second;
        for (int j = 0; j < a.size(); j++)
        {
            if (x <= a[j] && f == -1) f = j;
            if (y <= a[j] && s == -1)
            {
                if (y == a[j]) s = j;
                else s = j - 1;
                break;
            }
        }
        cout << s - f + 1 << "\n";
        //cout << f << " " << s << "\n";
    }
    return 0;
}
