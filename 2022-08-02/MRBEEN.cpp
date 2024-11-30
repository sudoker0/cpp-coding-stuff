#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll x, ll y)
{
    ll total = 1;
    for (ll i = 0; i < y; i++)
        total *= x;
    return total;
}

int main()
{
    freopen("MRBEEN.INP", "r", stdin);
    freopen("MRBEEN.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll C, K, money, extra;
    cin >> C >> K;
    money = power(10, K);
    extra = C % money;

    if (extra >= money / 2) C += money - extra;
    else C -= extra;

    cout << C;
    return 0;
}