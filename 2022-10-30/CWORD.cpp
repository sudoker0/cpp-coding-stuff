#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
    freopen("CWORD.INP", "r", stdin);
    freopen("CWORD.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int cnt = 0;
    string S, word;
    getline(cin, S);
    stringstream ss(S);

    while (ss >> word) {
        if (word.size() == 1) {
            cnt++;
            continue;
        }
        bool good = true;
        for(int i = 0; i < word.size() / 2; i++)
        {
            if (word[i] != word[word.size() - i - 1])
            {
                good = false;
                break;
            }
        }
        if (good) cnt++;
    }

    cout << cnt;
    return 0;
}
