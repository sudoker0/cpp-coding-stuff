#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    freopen("TRIANGLE.INP", "r", stdin);
    freopen("TRIANGLE.OUT", "w", stdout);

    cin >> a >> b >> c;

    if (!(a + b > c && a + c > b && b + c > a))
    {
        cout << "KHONG PHAI TAM GIAC";
        return 0;
    }
    if (pow(c, 2) == pow(a, 2) + pow(b, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(a, 2) == pow(c, 2) + pow(b, 2))
    {
        cout << "TAM GIAC VUONG";
        return 0;
    }
    if (a == b || b == c || c == a)
    {
        cout << "TAM GIAC CAN";
        return 0;
    }
    cout << "TAM GIAC THUONG";
    return 0;
}