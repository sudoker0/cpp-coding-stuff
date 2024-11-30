#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int a, b, c;
    freopen("TRIANGLE.INP", "r", stdin);
    freopen("TRIANGLE.OUT", "w", stdout);
    cin >> a >> b >> c;
    if (a + b < c || b + c < a || a + c < b)
    {
        cout << "KHONG PHAI TAM GIAC";
        return 0;
    }
    if (pow(c, 2) == pow(a, 2) + pow(b, 2))
    {
        cout << "TAM GIAC VUONG";
    }
    else if (a == b)
    {
        cout << "TAM GIAC CAN";
    }
    else
    {
        cout << "TAM GIAC THUONG";
    }
    return 0;
}