#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SUMSEQ0.inp", "r", stdin);
    freopen("SUMSEQ0.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, t, cnt = 0;
    cin >> N;
    int A[N + 1];
    A[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> t;
        A[i] = A[i - 1] + t;
    }

    for (int i = 1; i <= N; i++)
        for (int j = i; j <= N; j++)
            if (A[j] - A[i - 1] == 0) cnt++;

    cout << cnt;

    return 0;
}
