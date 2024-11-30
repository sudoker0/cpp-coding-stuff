#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main()
{
    int N;
    long long tong = LLONG_MIN;

    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    int day[N];
    for (int i = 0; i < N; i++) cin >> day[i];

    for (int i = 0; i < N - 1; i++)
    {
        long long buffer = 0;
        for (int j = i; j < N; j++)
        {
            buffer += day[j];
            if (buffer >= tong) tong = buffer;
        }
    }

    cout << tong;
    return 0;
}