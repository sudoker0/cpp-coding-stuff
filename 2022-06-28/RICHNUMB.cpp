#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, accum = 0;
    freopen("RICHNUMB.INP", "r", stdin);
    freopen("RICHNUMB.OUT", "w", stdout);
    cin >> N;

    for (int i = 1; i <= N / 2; i++)
    {
        if (N % i == 0) accum += i;
    }

    if (N >= accum) cout << "Poor Number";
    else cout << "Rich Number";
}