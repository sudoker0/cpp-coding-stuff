#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string S, continous, buffer = "";
    getline(cin, S);

    for (int i = 0; i < S.size(); i++)
    {
        char c = S[i];
        if (c >= '0' and c <= '9')
            continous += c;
        else if (continous.size() > 0)
        {
            buffer += continous + '\n';
            continous = "";
        }
    }
    if (buffer.size() > 0) cout << buffer;
    else cout << "No";

    return 0;
}