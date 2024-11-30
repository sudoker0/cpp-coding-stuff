#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop, accum = 0;
    char buffer;
    freopen("CHESS.INP", "r", stdin);
    freopen("CHESS.OUT", "w", stdout);
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        cin >> buffer;
        switch (buffer)
        {
            case 't':
                accum += 1;
                break;
            case 'M':
            case 'T':
                accum += 3;
                break;
            case 'X':
                accum += 5;
                break;
            case 'H':
                accum += 9;
                break;
            case 'V':
                accum += 0;
                break;
        }
    }
    cout << accum;
    return 0;
}
