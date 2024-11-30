#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("DELSTR.INP", "r", stdin);
    freopen("DELSTR.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, step = 0;
    string S;
    char c = '@';
    vector<string> str;
    cin >> n >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (c != S[i])
        {
            str.push_back("");
            c = S[i];
        }
        str[str.size() - 1] += c;
    }

    while (str.size() > 0)
    {
        string deleted, curstr;
        int diff = 1, ldiff = 1001, pos = 0;
        for (int i = 0; i < str.size(); i++)
        {
            deleted = str[i];
            str.erase(str.begin() + i);
            for (int j = 1; j < str.size(); j++)
                if (str[j][0] != str[j - 1][0]) diff++;
            if (diff < ldiff)
            {
                pos = i;
                ldiff = diff;
            }
            str.insert(str.begin() + i, deleted);
            diff = 1;
        }
        str.erase(str.begin() + pos);
        for (int i = 1; i < str.size(); i++)
        {
            if (str[i - 1][0] == str[i][0])
            {
                str[i] += str[i - 1];
                str.erase(str.begin() + i - 1);
            }
        }
        step++;
    }

    cout << step;

    return 0;
}