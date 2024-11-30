#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, T, F, time;
    freopen("TIMEZONE.INP", "r", stdin);
    freopen("TIMEZONE.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> S >> T >> F;

    time = S + T + F;

    if (time >= 24)
    {
        time -= 24;
    }
    else if (time < 0)
    {
        time += 24;
    }

    cout << time;
}