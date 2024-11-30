#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, l2, r2, l3, r3, l_longest, r_longest;

    freopen("DOAN.INP", "r", stdin);
    freopen("DOAN.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> l1 >> r1 >> l2 >> r2 >> l3 >> r3;

    l_longest = l1;
    r_longest = r1;

    // ! Kiem tra doan 1 va doan 2

    //           |l1----------------r1| ] => |l2--------------------------r1|
    // |l2------------------r2|         ] (Combined)
    if (l_longest <= r2 and l_longest >= l2)
    {
        l_longest = l2;
    }

    // |l1----------------r1|          ] => |l1-------------------------r2|
    //        |l2------------------r2| ] (Combined)
    if (r_longest >= l2 and r_longest <= r2)
    {
        r_longest = r2;
    }

    //                |l1----------------r1| ] => |l2--------r2| |l1----------------r1|
    // |l2--------r2|                        ] (Combined)
    // ================================================================================
    // |l1----------------r1|                ] => |l1----------------r1| |l2--------r2|
    //                        |l2--------r2| ] (Combined)
    if (l_longest > r2 or r_longest < l2)
    {
        if (abs(r_longest - l_longest) < abs(r2 - l2))
        {
            l_longest = l2;
            r_longest = r2;
        }
    }

    if (r_longest >= r2 and l_longest <= l2)
    {
        // Do nothing
    }

    //       |l1---------------r1|       ] => |l2------------------------r2|
    //    |l2------------------------r2| ] (Combined)
    if (r_longest <= r2 and l_longest >= l2)
    {
        l_longest = l2;
        r_longest = r2;
    }

    // ! Kiem tra doan 12 va 3

    //           |l12--------------r12| ] => |l3-------------------------r12|
    // |l3------------------r3|         ] (Combined)
    if (l_longest <= r3 and l_longest >= l3)
    {
        l_longest = l3;
    }

    // |l12--------------r12|          ] => |l12------------------------r3|
    //        |l3------------------r3| ] (Combined)
    if (r_longest >= l3 and r_longest <= r3)
    {
        r_longest = r3;
    }

    //                |l12--------------r12| ] => |l3--------r3| |l12--------------r12|
    // |l3--------r3|                        ] (Combined)
    // ================================================================================
    // |l12--------------r12|                ] => |l12--------------r12| |l3--------r3|
    //                        |l3--------r3| ] (Combined)
    if (l_longest > r3 or r_longest < l3)
    {
        if (abs(r_longest - l_longest) < abs(r3 - l3))
        {
            l_longest = l3;
            r_longest = r3;
        }
    }

    if (r_longest >= r3 and l_longest <= l3)
    {
        // Do nothing
    }

    //       |l12-------------r12|       ] => |l3------------------------r3|
    //    |l3------------------------r3| ] (Combined)
    if (r_longest <= r3 and l_longest >= l3)
    {
        l_longest = l3;
        r_longest = r3;
    }

    cout << abs(r_longest - l_longest);
    return 0;
}