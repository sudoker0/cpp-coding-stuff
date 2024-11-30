#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, K;
    freopen("PAINT.INP", "r", stdin);
    freopen("PAINT.OUT", "w", stdout);
    cin >> N >> K;
    // N cot, K lo son
    cout << K * pow(K - 1, N - 1);
}
