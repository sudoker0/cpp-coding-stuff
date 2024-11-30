#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, q = 0, r = 0;

    freopen("BIEUTHUC.INP", "r", stdin);
    freopen("BIEUTHUC.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;

    if (a >= 0)
    {
        q = a / b;
    }
    else
    {
        q = a / b - 1;
    }
    r = a - (q * b);

    cout << q << " " << r;
    return 0;
}