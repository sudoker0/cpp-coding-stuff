#include <bits/stdc++.h>
using namespace std;

int main()
{
    int accum = 0, largest = 0, position = 0;
    freopen("MAXNUMB.INP", "r", stdin);
    freopen("MAXNUMB.OUT", "w", stdout);
    for (int i = 0; i < 100; i++)
    {
        accum = 0;
        cin >> accum;
        if (accum >= largest)
        {
            largest = accum;
            position = i + 1;
        }
    }
    cout << largest << " " << position;
    return 0;
}