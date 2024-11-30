#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    freopen("LOCATION.INP", "r", stdin);
    freopen("LOCATION.OUT", "w", stdout);

    cin >> x >> y;

    if (x == 0 and y == 0)
    {
        cout << "Origem";
        return 0;
    }
    if (x == 0)
    {
        cout << "Eixo Y";
        return 0;
    }
    if (y == 0)
    {
        cout << "Eixo X";
        return 0;
    }
    if (x > 0)
    {
        if (y > 0)
        {
            cout << "Q1";
        }
        else
        {
            cout << "Q4";
        }
    }
    else
    {
        if (y > 0)
        {
            cout << "Q2";
        }
        else
        {
            cout << "Q3";
        }
    }
    return 0;
}