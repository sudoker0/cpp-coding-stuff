#include <bits/stdc++.h>
using namespace std;

int main()
{
    int so_dien, tien_dien;
    freopen("TIENDIEN.INP", "r", stdin);
    freopen("TIENDIEN.OUT", "w", stdout);

    cin >> so_dien;
    if (so_dien < 50)
    {
        tien_dien = so_dien * 100;
    }
    else if (so_dien >= 50 and so_dien < 1000)
    {
        tien_dien = so_dien * 500;
    }
    else if (so_dien >= 1000 and so_dien < 10000)
    {
        tien_dien = so_dien * 1000;
    }
    else
    {
        tien_dien = so_dien * 1200;
    }
    cout << tien_dien;
    return 0;
}