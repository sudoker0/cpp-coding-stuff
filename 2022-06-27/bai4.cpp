#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int m1, m2, dv1, dv2;
    double g1, g2, tien = 0;
    freopen("RECEIPT.INP", "r", stdin);
    freopen("RECEIPT.OUT", "w", stdout);
    cin >> m1 >> dv1 >> g1 >> m2 >> dv2 >> g2;

    cout << fixed << setprecision(2);
    tien = dv1 * g1 + dv2 * g2;

    cout << "VALOR A PAGAR: R$ " << tien;
    return 0;
}