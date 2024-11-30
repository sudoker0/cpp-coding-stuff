#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k, count = 0, total = 0;
    double a, b;

    freopen("TONGSO.INP", "r", stdin);
    freopen("TONGSO.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> k;

    a = ceil(a / k) * k;
    b = floor(b / k) * k;
    count = (b - a) / k + 1;
    total = count * (2 * a + (count - 1) * k) / 2;

    cout << total;
    return 0;
}