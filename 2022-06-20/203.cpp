#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    int a, b, x;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("HAMBAC1.inp", "r", stdin);
    cin >> a >> b >> x;
    freopen("HAMBAC1.out", "w", stdout);
    cout << (a * x + b);
    return 0;
}