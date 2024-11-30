#include <bits/stdc++.h>
#include <limits.h>
#include <float.h>
using namespace std;

int main()
{
    int N; // canh
    double h, v, h_shortest = DBL_MAX, h_longest = -DBL_MAX, v_shortest = DBL_MAX, v_longest = -DBL_MAX;

    freopen("POLYGON.INP", "r", stdin);
    freopen("POLYGON.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> h >> v;
        if (h < h_shortest) h_shortest = h;
        if (h > h_longest) h_longest = h;
        if (v < v_shortest) v_shortest = v;
        if (v > v_longest) v_longest = v;
    }
    cout << fixed << setprecision(4);
    cout << (h_longest - h_shortest) * (v_longest - v_shortest);

    return 0;
}