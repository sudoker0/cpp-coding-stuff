#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("MAXDIFF.inp", "r", stdin);
    freopen("MAXDIFF.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, max = 0, min = 1000000001;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] < min) min = b[i];
        if (b[i] > max) max = b[i];


    }

    cout << "Work In Progress";

    return 0;
}
