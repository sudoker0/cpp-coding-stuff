#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int nam, nu, nhom_nho_nhat, cap_nam_nu, cap_dong_gioi;
    freopen("PAIRING.INP", "r", stdin);
    freopen("PAIRING.OUT", "w", stdout);
    cin >> nam >> nu;

    nhom_nho_nhat = min(nam, nu);

    cap_nam_nu = nhom_nho_nhat;
    // Support LGBT!
    cap_dong_gioi = floor((nam + nu - nhom_nho_nhat - cap_nam_nu) / 2);

    cout << cap_nam_nu << " " << cap_dong_gioi;
    return 0;
}