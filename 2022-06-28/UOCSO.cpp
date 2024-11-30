#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    freopen("UOCSO.INP", "r", stdin);
    freopen("UOCSO.OUT", "w", stdout);
    cin >> N;
    for (long long i = 1; i <= N / 2; i++)
    {
        if (N % i == 0) cout << i << " ";
    }
    cout << N;
    return 0;
}