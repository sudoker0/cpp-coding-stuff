#include <bits/stdc++.h>
using namespace std;
const double PI = 3.14;
double R;
int main()
{
    cout << "Nhap ban kinh cua duong tron tam O: ";
    cin >> R;
    cout << "Duong tron tam O co ban kinh " << R << "cm co:\n";
    cout << " - Chu vi: " << R * 2 * PI << "cm\n";
    cout << " - Dien tich: " << R * R * PI << "cm2\n";
    return 0;
}
