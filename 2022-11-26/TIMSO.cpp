#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
    freopen("TIMSO.inp", "r", stdin);
    freopen("TIMSO.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll N;
    int K;
    cin >> N >> K;

    int prime[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    ll total_div = 1;
    for (int i = 0; i < K; i++) total_div *= prime[i];

    if (N < total_div)
    {
        cout << -1;
    }
    else
    {
        cout << total_div;
    }
    return 0;
}
