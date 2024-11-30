#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hb, he, mb, me, h, m;
    freopen("TIMEGAME.INP", "r", stdin);
    freopen("TIMEGAME.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> hb >> mb >> he >> me;

    if (he == hb and me == mb)
    {
        h = 24;
        m = 0;
    }
    else if (he >= hb and me >= mb)
    {
        h = he - hb;
        m = me - mb;
    }
    else if (he > hb and me < mb)
    {
        h = he - hb - 1;
        m = me - mb + 60;
    }
    else if (he <= hb and me < mb)
    {
        h = he - hb + 23;
        m = me - mb + 60;
    }
    else if (he <= hb and me >= mb)
    {
        h = he - hb + 23;
        m = me - mb;
    }
    cout << h << "h " << m << "m";
    return 0;
}