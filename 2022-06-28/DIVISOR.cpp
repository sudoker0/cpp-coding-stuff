#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, uoc = 1;
    freopen("DIVISOR.INP", "r", stdin);
    freopen("DIVISOR.OUT", "w", stdout);
    cin >> N;
    for (long long i = 1; i <= N / 2; i++)
    {
        if (N % i == 0) uoc += 1;
    }
    cout << uoc;
    return 0;
}