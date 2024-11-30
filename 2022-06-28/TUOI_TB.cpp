#include <bits/stdc++.h>
using namespace std;

int main()
{
    double current_number, accum = 0, count = 0, tb;
    freopen("TUOI_TB.INP", "r", stdin);
    freopen("TUOI_TB.OUT", "w", stdout);
    while (!cin.eof())
    {
        cin >> current_number;
        if (current_number < 0) break;
        count++;
        accum += current_number;
    }
    cout << fixed << setprecision(2);
    tb = accum / count;
    cout << tb;
}
