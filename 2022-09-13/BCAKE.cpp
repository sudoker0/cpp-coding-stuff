#include <bits/stdc++.h>
using namespace std;

const float PI = 3.141592653589793;
// pi * r^2 * h

double total = 0, buffer = 0;
int n;
pair<int, int> cake[100001];

void loop(int pos)
{
    double e = PI * cake[pos].first * cake[pos].first * cake[pos].second;
    buffer += e;
    bool found = false;
    for (int i = pos + 1; i < n; i++)
    {
        if (
            (cake[pos].first <= cake[i].first and cake[pos].second < cake[i].second) or
            (cake[pos].first < cake[i].first and cake[pos].second <= cake[i].second)
        ) {
            found = true;
            loop(i);
        }
    }
    if (!found)
    {
        if (buffer >= total)
        {
            total = buffer;
        }
        buffer -= e;
    }
}

int main()
{
    freopen("BCAKE.INP", "r", stdin);
    freopen("BCAKE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> cake[i].first >> cake[i].second;

    loop(0);
    cout << fixed << setprecision(3);
    cout << total;

    return 0;
}