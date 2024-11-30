#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, so_can = 1;
    freopen("CANS.INP", "r", stdin);
    freopen("CANS.OUT", "w", stdout);
    cin >> A >> B >> C;
    if (A != B) so_can += 1;
    if (B != C) so_can += 1;
    cout << so_can;
    return 0;
}