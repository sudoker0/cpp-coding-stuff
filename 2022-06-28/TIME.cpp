#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, thoi_gian;
    freopen("TIME.INP", "r", stdin);
    freopen("TIME.OUT", "w", stdout);

    cin >> A >> B;

    thoi_gian = A + B;
    if (thoi_gian >= 24) thoi_gian -= 24;
    cout << thoi_gian;
    return 0;
}