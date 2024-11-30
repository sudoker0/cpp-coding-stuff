#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int N;
    freopen("SENBO.inp", "r", stdin);
    freopen("SENBO.out", "w", stdout);

    cin >> N;
    cout << N << "\n" << floor(N / 2);
    return 0;
}