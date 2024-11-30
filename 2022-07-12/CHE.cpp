#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, win_An = 0, win_Binh = 0;
    char s, result;

    freopen("CHE.INP", "r", stdin);
    freopen("CHE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        switch (s)
        {
            case 'A':
                win_An++;
                break;
            case 'B':
                win_Binh++;
                break;
        }
    }

    if (win_An > win_Binh)
        result = '>';
    else if (win_An < win_Binh)
        result = '<';
    else
        result = '=';

    cout << result;
    return 0;
}