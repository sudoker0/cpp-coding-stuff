#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int d, N, num, cnt = 0;
    cin >> d >> N;
    ll day[N + 1];
    day[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> num;
        day[i] = day[i - 1] + num;
    }

    for (int i = 1; i <= N; i++)
        for (int j = i; j <= N; j++)
        {
            int n = day[j] - day[i - 1];
            if (n % d == 0) cnt++;
        }

    cout << cnt;
    return 0;
}