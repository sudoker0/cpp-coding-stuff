#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("D_XUNG.INP", "r", stdin);
    freopen("D_XUNG.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str, sub, old;
    int k, x, y;
    cin >> str >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        sub = str.substr(x - 1, y - x + 1);
        old = sub;
        reverse(sub.begin(), sub.end());
        if (old == sub)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}