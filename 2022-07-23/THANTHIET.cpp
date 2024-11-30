#include <bits/stdc++.h>
using namespace std;

int tong_uoc(int so)
{
    int tong = 0;

    for (int i = 1; i * i <= so; i++)
    {
        if (so % i == 0)
        {
            if (i * i == so) tong += i;
            else tong += i + so / i;
        }
    }

    return tong - so;
}

int main()
{
    int a, b, tong_so_hoan_hao = 0;

    freopen("THANTHIET.INP", "r", stdin);
    freopen("THANTHIET.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int so_1 = tong_uoc(i);
        if (so_1 < a or so_1 > b) continue;

        int so_2 = tong_uoc(so_1);

        if (i == so_2 and so_1 != so_2) tong_so_hoan_hao++;
    }

    cout << tong_so_hoan_hao / 2;
    return 0;
}