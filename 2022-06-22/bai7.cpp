#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Nhap so a, b va c de giai ax2 + bx + c = 0: ";
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "Phuong trinh vo nghiem";
    }
    else if (delta == 0)
    {
        cout << "Phuong trinh co nghiem kep x1, x2: " << -b / (2 * a);
    }
    else
    {
        cout << "Phuong trinh " << a << "x2 + " << b << "x + " << c << " = 0 co:\n";
        cout << " - x1 = " << (-b + sqrt(delta)) / (2 * a) << "\n";
        cout << " - x2 = " << (-b - sqrt(delta)) / (2 * a) << "\n";
    }
    return 0;
}
