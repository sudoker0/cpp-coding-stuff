#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, N, total = 0;

    freopen("INTEGER.INP", "r", stdin);
    freopen("INTEGER.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> A;

    while (!cin.eof()) {
        cin >> N;
        if (N > 0) break;
    }

    for (int i = 0; i < N; i++)
    {
        total += A + i;
    }

    cout << total;
    return 0;
}