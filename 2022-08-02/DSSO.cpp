#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DSSO.INP", "r", stdin);
    freopen("DSKQ.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    string x;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        int tong_day = 0;
        for (int j = 0; j < x.length(); j++)
            tong_day += x[j] - '0';
        cout << tong_day % 9 << "\n";
    }

    return 0;
}