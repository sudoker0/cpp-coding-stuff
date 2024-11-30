#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SUMDIV.inp", "r", stdin);
    freopen("SUMDIV.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool prime[1000001];
    memset(prime, true, sizeof(prime));
    prime[1] = false;
    for (int x = 2; x * x <= 1000001; x++)
    {
        if (!prime[x]) continue;
        for (int y = x * 2; y <= 1000001; y += x)
        {
            prime[y] = false;
        }
    }

    int n, T, i, j, a_tmp;
    cin >> n >> T;
    int a[n + 1];
    a[0] = 0;
    
    for (int x = 1; x <= n; x++)
    {
        int tmp = 0;
        cin >> a_tmp;
        if (a_tmp <= 1000000 && prime[a_tmp])
        {
            tmp = 1 + a_tmp;
        }
        else
        {
            for (int y = 2; y * y <= a_tmp; y++)
            {
                if (a_tmp % y == 0)
                {
                    tmp = 1 + y;
                    break;
                }
            }
        }
        a[x] = a[x - 1] + tmp;
    }
    
    for (int x = 0; x < T; x++)
    {
        cin >> i >> j;
        cout << a[j] - a[i - 1] << "\n";
    }

    return 0;
}
