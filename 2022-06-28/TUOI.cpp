#include <bits/stdc++.h>
using namespace std;

int main()
{
    int so_ngay_tuoi, so_nam, so_thang, so_ngay;
    freopen("TUOI.INP", "r", stdin);
    freopen("TUOI.OUT", "w", stdout);

    cin >> so_ngay_tuoi;

    so_nam = so_ngay_tuoi / 365;
    so_ngay_tuoi -= so_nam * 365;

    so_thang = so_ngay_tuoi / 30;
    so_ngay_tuoi -= so_thang * 30;

    so_ngay = so_ngay_tuoi;

    cout << so_nam << " nam " << so_thang << " thang " << so_ngay << " ngay";
    return 0;
}