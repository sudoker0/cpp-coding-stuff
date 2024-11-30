#include <bits/stdc++.h>
using namespace std;

void str(string start, string s = "")
{
    for (int i = 0; i < start.size(); i++)
    {
        if (s.find(start[i]) != string::npos) continue;
        s += start[i];
        if (start.size() - s.size() == 0)
        {
            cout << s << ' ';
        } else str(start, s);
    }
}

int main()
{
    freopen("MAXNUM.INP", "r", stdin);
    freopen("MAXNUM.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, o;
    cin >> s;
    o = s;

    sort(o.begin(), o.end());
    if (s == o)
    {
        cout << 0;
        return 0;
    }

    str(s);

    return 0;
}