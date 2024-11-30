#include <bits/stdc++.h>
using namespace std;

int main()
{
    double money, extra, increase;

    freopen("SALARY.INP", "r", stdin);
    freopen("SALARY.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> money;

    if (0 <= money and money <= 400) increase = 15;
    else if (400 <= money and money <= 800) increase = 12;
    else if (800 <= money and money <= 1200) increase = 10;
    else if (1200 <= money and money <= 2000) increase = 7;
    else if (2000 <= money) increase = 4;

    extra = money * (increase / 100);

    cout << fixed << setprecision(2);
    cout << "Luong moi: " << money + extra << "\n";
    cout << "Luong tang them: " << extra << "\n";
    cout << "Ty le phan tram: " << (int)increase << "%";
    return 0;
}