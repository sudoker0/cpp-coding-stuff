#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TOMJERRY.INP", "r", stdin);
    freopen("TOMJERRY.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        if (N % 2 == 0) cout << 1 << "\n";
        else cout << 0 << "\n";
    }

    return 0;
}