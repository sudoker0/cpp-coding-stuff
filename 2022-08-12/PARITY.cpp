#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("PARITY.INP", "r", stdin);
    freopen("PARITY.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, count = 0;
    long long N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        while (N > 0)
        {
            if (N % 2 == 1) count++;
            N /= 2;
        }
        if (count % 2 == 0) cout << "even\n";
        else cout << "odd\n";
        count = 0;
    }

    return 0;
}