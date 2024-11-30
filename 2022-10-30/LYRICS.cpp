#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main()
{
    freopen("LYRICS.INP", "r", stdin);
    freopen("LYRICS.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k = INT_MAX;
    cin >> n >> m;
    string s_arr[n];
    cin.ignore(1);

    for (int i = 0; i < n; i++)
    {
        string s; 
        getline(cin, s);
        s_arr[i] = s;
    }

    for (int i = 0; i < n - m; i++)
    {
        int ck = 0;
        string sa = s_arr[i], sb = s_arr[i + m];
        reverse(sa.begin(), sa.end());
        reverse(sb.begin(), sb.end());
        if (sa.size() > sb.size()) swap(sa, sb);

        for (int j = 0; j < sa.size(); j++)
        {
            if (sa[j] != sb[j])
            {
                break;
            }
            ck++;
        }
        if (ck < k) k = ck;
    }

    cout << k;

    return 0;
}
