#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int search(ll arr[], ll n, ll K)
{
    ll start = 0;
    ll end = n - 1;
    while (start <= end)
    {
        ll mid = (start + end) / 2;
        if (K == arr[mid]) return mid;
        if (K > arr[mid]) start = mid + 1;
        else if (K < arr[mid]) end = mid - 1;
    }
    return end;
}

int main()
{
    freopen("THAMQUAN.INP", "r", stdin);
    freopen("THAMQUAN.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m, B;
    cin >> n >> m;
    ll A[n + 1];
    A[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ll in;
        cin >> in;

        A[i] = A[i - 1] + in;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> B;
        cout << max(search(A, n + 1, B), 0) << ' ';
    }
    return 0;
}
