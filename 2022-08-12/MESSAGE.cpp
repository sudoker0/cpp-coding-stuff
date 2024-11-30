#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("MESSAGE.INP", "r", stdin);
    freopen("MESSAGE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cout << (N - 1) * 2 << "\n";
    }

    return 0;
}