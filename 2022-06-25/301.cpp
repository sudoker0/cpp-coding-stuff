#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Hay nhap ba so a, b va c: ";
    cin >> a >> b >> c;
    cout << (a + b > c && a + c > b && b + c > a);
    return 0;
}