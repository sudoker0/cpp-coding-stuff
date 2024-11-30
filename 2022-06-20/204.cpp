#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    double a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("S_HCN.inp", "r", stdin);
    freopen("S_HCN.out", "w", stdout);
    cin >> a >> b;
    cout << (a + b) * 2 << "\n" << a * b;
    return 0;
}