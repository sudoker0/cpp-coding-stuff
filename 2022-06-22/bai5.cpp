#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, max_num;
    cout << "Nhap 4 so nguyen a, b, c, d: ";
    cin >> a >> b >> c >> d;
    max_num = a;
    if (max_num < b) max_num = b;
    if (max_num < c) max_num = c;
    if (max_num < d) max_num = d;
    cout << "Gia tri lon nhat la: " << max_num;
    return 0;
}
