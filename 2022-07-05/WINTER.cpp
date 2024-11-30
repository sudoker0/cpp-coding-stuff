#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    freopen("WINTER.INP", "r", stdin);
    freopen("WINTER.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> A >> B >> C;

    if (A > B)
    {
        if (B <= C)
        {
            cout << ":)";
            return 0;
        }
        else
        {
            if (B - C < A - B)
            {
                cout << ":)";
                return 0;
            }
            else
            {
                cout << ":(";
                return 0;
            }
        }
    }
    else if (A < B)
    {
        if (B >= C)
        {
            cout << ":(";
            return 0;
        }
        else
        {
            if (C - B < B - A)
            {
                cout << ":(";
                return 0;
            }
            else
            {
                cout << ":)";
                return 0;
            }
        }
    }
    else
    {
        if (B < C)
        {
            cout << ":)";
            return 0;
        }
        else
        {
            cout << ":(";
            return 0;
        }
    }
}