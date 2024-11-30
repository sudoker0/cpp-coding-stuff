#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, d, buffer, lon_nhat = 0;
    cin >> n >> d;

    vector<int> day(n);
    cin >> day[0];
    for (int i = 1; i < n; i++)
    {
        cin >> buffer;
        day[i] = day[i - 1] + buffer;
    }

    for (int i = d - 1; i < n; i++)
    {
        int tong = day[i] - day[i - d];
        if (tong > lon_nhat) lon_nhat = tong;
    }

    cout << lon_nhat;
    return 0;
}