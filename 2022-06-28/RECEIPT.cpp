#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m1, dv1, m2, dv2;
    double g1, g2;

    freopen("RECEIPT.INP", "r", stdin);
    freopen("RECEIPT.OUT", "w", stdout);

    cin >> m1 >> dv1 >> g1 >> m2 >> dv2 >> g2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << dv1 * g1 + dv2 * g2;
}