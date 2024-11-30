#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long

int main()
{
    ll n, m, smallest, so_to, nam, nu;
    freopen("BT307.inp", "r", stdin);
    freopen("BT307.out", "w", stdout);

    cin >> m >> n;
    smallest = min(m, n);

    for (ll i = 1; i <= round(smallest / 2); i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            so_to = i;
        }
    }
    nam = m / so_to;
    nu = n / so_to;

    cout << so_to << "\n" << nam << " " << nu;
    return 0;
}