#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int S, K, thua, tien_thua, tien_5k, tien_2k, tien_1k;
    freopen("BT308.inp", "r", stdin);
    freopen("BT308.out", "w", stdout);

    cin >> S >> K;

    thua = K - S;
    tien_thua = thua;

    tien_5k = floor(thua / 5000);
    thua -= tien_5k * 5000;

    tien_2k = floor(thua / 2000);
    thua -= tien_2k * 2000;

    tien_1k = floor(thua / 1000);
    thua -= tien_1k * 1000;

    cout << tien_thua << "\n" << tien_1k << " " << tien_2k << " " << tien_5k;
    return 0;
}