#include <bits/stdc++.h>
#include <climits>
#define ull unsigned long long
using namespace std;

int main()
{
    freopen("TCDS.inp", "r", stdin);
    freopen("TCDS.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, c;
    ll smallest = ULLONG_MAX;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        for (int j = 0; j < n; j++)
        {
            ll v = abs(c + b[j]);
            if (smallest > v) smallest = v;
        }
    }

    cout << smallest;
    return 0;
}
