#include <bits/stdc++.h>
using namespace std;
int main()
{
    int chieu_dai, chieu_rong;
    cout << "Nhap chieu dai va chieu rong cua hinh chu nhat (duoc cach nhau boi 1 dau cach): ";
    cin >> chieu_dai >> chieu_rong;
    cout << "Hinh chu nhat dai " << chieu_dai << "cm va rong " << chieu_rong << "cm co:\n";
    cout << " - Chu vi: " << (chieu_dai + chieu_rong) * 2 << "cm\n";
    cout << " - Dien tich: " << chieu_dai * chieu_rong << "cm2\n";
    return 0;
}
