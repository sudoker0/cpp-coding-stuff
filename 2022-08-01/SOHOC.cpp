#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, chia_het_cho_3 = 0, co_ba_uoc_duong = 0;

    freopen("SOHOC.INP", "r", stdin);
    freopen("SOHOC.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    long long day[n];
    for (int i = 0; i < n; i++) cin >> day[i];

    for (int i = 0; i < n; i++)
    {
        if (day[i] % 3 == 0)
            chia_het_cho_3 += day[i];
        int sq = sqrt(day[i]);
        if (sq * sq == day[i] and abs(day[i]) != 1) co_ba_uoc_duong++;
    }

    cout << chia_het_cho_3 << "\n" << co_ba_uoc_duong;
    return 0;
}