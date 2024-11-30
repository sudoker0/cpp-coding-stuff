#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int MATKHAUDUNG = 2002;
    int current_password = 0;

    freopen("MATKHAU.INP", "r", stdin);
    freopen("MATKHAU.OUT", "w", stdout);
    while (!cin.eof())
    {
        cin >> current_password;
        if (current_password == MATKHAUDUNG)
        {
            cout << "Duoc phep truy cap\n";
            break;
        }
        else
        {
            cout << "Sai mat khau\n";
        }
    }
    return 0;
}