#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    long long Sn = 0, n = 1;

    freopen("TIMSO.INP", "r", stdin);
    freopen("TIMSO.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> A;

    while (Sn <= A)
    {
        Sn += n * n;
        n++;
    }

    cout << n - 1;
    return 0;
}