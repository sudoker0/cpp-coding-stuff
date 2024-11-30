#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("PASSWORD.inp", "r", stdin);
    freopen("PASSWORD.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string S;
    cin >> S;
    int cnt = 0;

    for (int i = 0; i < S.size() - 5; i++)
    {
        for (int j = i + 5; j < S.size(); j++)
        {
            bool good[3] = { false, false, false }, t = true;
            for (int x = i; x <= j; x++)
            {
                if (S[x] >= 'a' && S[x] <= 'z') good[0] = true;
                if (S[x] >= 'A' && S[x] <= 'Z') good[1] = true;
                if (S[x] >= '0' && S[x] <= '9') good[2] = true;
            }
            for (int i = 0; i < 3; i++)
            {
                if (!good[i])
                {
                    t = false;
                    break;
                }
            }
            if (t) cnt++;
        }
    }

    cout << cnt;

    return 0;
}
