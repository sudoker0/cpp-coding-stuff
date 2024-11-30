#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    unsigned long long tong = 0;

    freopen("VATSUA.INP", "r", stdin);
    freopen("VATSUA.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N;

    int bo[N];
    for (int i = 0; i < N; i++) cin >> bo[i];
    sort(bo, bo + N);

    for (int i = N - 1; i >= 0; i--) tong += max(bo[i] - (N - i - 1), 0);

    cout << tong;

    return 0;
}