#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Nhap so a va b de giai ax + b = 0: ";
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
            cout << "Phuong trinh vo so nghiem";
        else
            cout << "Phuong trinh vo nghiem";
    }
    else
    {
        cout << "Phuong trinh " << a << "x + " << b << " = 0 co x la: " << 1.0 * -b / a;
    }
    return 0;
}
