#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("THEMES.inp", "r", stdin);
    freopen("THEMES.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, cnt = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1]) cnt++;
    }

    cout << cnt;

    return 0;
}
