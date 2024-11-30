#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DELNUM.INP", "r", stdin);
    freopen("DELNUM.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, pointer = 1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    while (true)
    {
        if (a[pointer] < a[pointer - 1] and a[pointer] < a[pointer + 1])
        {
            a.erase(a.begin() + pointer);
            pointer = 1;
            continue;
        }
        else
        {
            if (pointer < a.size() - 1) pointer++;
            else break;
        }
    }

    cout << a.size();

    return 0;
}