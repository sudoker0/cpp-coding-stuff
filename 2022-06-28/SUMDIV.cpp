#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, sumdiv = 0;
    freopen("SUMDIV.INP", "r", stdin);
    freopen("SUMDIV.OUT", "w", stdout);
    cin >> N;
    for (long long i = 1; i <= N / 2; i++)
    {
        if (N % i == 0) sumdiv += i;
    }
    sumdiv += N;
    cout << sumdiv;
    return 0;
}