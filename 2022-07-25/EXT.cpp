#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cuc_tri = 0;
    freopen("EXT.INP", "r", stdin);
    freopen("EXT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int day[n];

    for (int i = 0; i < n; i++) cin >> day[i];

    for (int i = 1; i < n - 1; i++)
        if (
            (day[i] < day[i - 1] and day[i] < day[i + 1]) or
            (day[i] > day[i - 1] and day[i] > day[i + 1])
        )
            cuc_tri++;

    cout << cuc_tri;
    return 0;
}