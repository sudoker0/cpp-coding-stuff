#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, buffer = 0, newN = 1, count = 0;
    freopen("ROOT.INP", "r", stdin);
    freopen("ROOT.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    while (N >= 10)
    {
        buffer = N;
        newN = 1;
        while (buffer > 0)
        {
            newN *= buffer % 10;
            buffer = buffer / 10;
        }
        N = newN;
        count++;
    }
    cout << count;
    return 0;
}