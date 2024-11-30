#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DIGITS.INP", "r", stdin);
    freopen("DIGITS.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N, tmp, total = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        tmp = N;

        while (true)
        {
            while (tmp > 0)
            {
                total += tmp % 10;
                tmp /= 10;
            }

            if (total < 10) break;
            else tmp = total;

            total = 0;
        }

        cout << total << "\n";
        total = 0;
    }

    return 0;
}