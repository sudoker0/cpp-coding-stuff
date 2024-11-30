#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int money[7] = {100, 50, 20, 10, 5, 2, 1};
    freopen("TIENGIAY.INP", "r", stdin);
    freopen("TIENGIAY.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    cout << N << "\n";
    for (int i = 0; i < 7; i++)
    {
        int amount = N / money[i];
        cout << amount << " to R$ " << money[i] << ",00\n";
        N -= amount * money[i];
    }

    return 0;

}