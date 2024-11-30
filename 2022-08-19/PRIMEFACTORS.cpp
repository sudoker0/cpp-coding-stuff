#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("PRIMEFACTORS.INP", "r", stdin);
    freopen("PRIMEFACTORS.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N, f, sz, cnt = 0, current = 0;
    vector<int> factor;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        factor.clear();
        cin >> N;
        while (N % 2 == 0) // Find all 2 factor
        {
            factor.push_back(2);
            N /= 2;
        }

        f = 3;
        while (f * f <= N)
        {
            if (N % f == 0)
            {
                factor.push_back(f);
                N /= f;
            }
            else f += 2;
        }

        if (N != 1) factor.push_back(N);

        sz = factor.size();
        cnt = 1;
        current = 0;
        for (int j = 0; j < sz; j++)
        {
            if (current != factor[j])
            {
                if (current != 0) cout << current << ' ' << cnt << ' ';
                current = factor[j];
                cnt = 1;
            }
            else
            {
                cnt++;
            }
        }
        cout << current << ' ' << cnt << '\n';
    }
    return 0;
}