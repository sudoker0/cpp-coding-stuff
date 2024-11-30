#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DAYNT.INP", "r", stdin);
    freopen("DAYNT.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    int dayso[N + 1], tmp, dem = 0;
    bool prime[1001];
    dayso[0] = 0;
    memset(prime, true, 1001);

    for (int i = 1; i <= N; i++)
    {
        cin >> tmp;
        dayso[i] = dayso[i - 1] + tmp;
    }

    for (int i = 2; i * i <= 1000; i++)
    {
        if (!prime[i]) continue;
        for (int j = i * 2; j <= 1000; j += i)
            prime[j] = false;
    }

    for (int i = 0; i < N; i++)
        for (int j = i + 1; j <= N; j++)
            if (prime[dayso[j] - dayso[i]]) dem++;

    cout << dem;
    return 0;
}