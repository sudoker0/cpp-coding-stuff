#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    freopen("COUNTPAIRS.INP", "r", stdin);
    freopen("COUNTPAIRS.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll T, N, cnt = 0;
    cin >> T;
    for (ll i = 0; i < T; i++)
    {
        cin >> N;
        cnt = 0;
        for (ll a = 1; a < N; a++)
        {
            cnt += max(N - 2 * a, (ll)0);
        }
        cout << cnt << "\n";
    }

    return 0;
}