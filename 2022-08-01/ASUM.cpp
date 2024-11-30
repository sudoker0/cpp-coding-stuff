#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, S, count = 0;
    // freopen("ASUM.INP", "r", stdin);
    // freopen("ASUM.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> S;

    long long day[n];
    for (int i = 0; i < n; i++) cin >> day[i];

    for (int i = 1; i <= n; i++) // Length of small array
        for (int pos = 0; pos <= n - i; pos++) // Start pos of small array
        {
            long long accum = 0;
            for (int len = pos; len < i + pos; len++) // Loop through the small array
                accum += day[len];
            if (abs(accum) > S) count++;
        }

    cout << count;

    return 0;
}