#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tong = 0;
    for (int i = 1; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
        }
    }
    cout << tong;
    return 0;
}