#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main()
{
    freopen("TFT.INP", "r", stdin);
    freopen("TFT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, so_phong_2 = INT_MAX, so_phong_3 = INT_MAX;
    cin >> n;

    for (int i = 1; i <= n / 2; i++)
    {
        int nguoi_phong_3 = n - (i * 2);
        if (nguoi_phong_3 % 3 == 0 and i + (nguoi_phong_3 / 3) < so_phong_2 + so_phong_3)
        {
            so_phong_2 = i;
            so_phong_3 = nguoi_phong_3 / 3;
        }
    }

    if (so_phong_2 >= INT_MAX or so_phong_3 >= INT_MAX) cout << -1;
    else cout << so_phong_2 << " " << so_phong_3;
    return 0;
}