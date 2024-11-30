#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D;
    freopen("HOMEWORK.INP", "r", stdin);
    freopen("HOMEWORK.OUT", "w", stdout);
    cin >> A >> B >> C >> D;

    bool A_in_CD = C <= A and A <= D;
    bool B_in_CD = C <= B and B <= D;
    bool C_in_AB = A <= C and C <= B;
    bool D_in_AB = A <= D and D <= B;

    if (C_in_AB and D_in_AB)
    {
        cout << D - C;
        return 0;
    }
    if (A_in_CD and B_in_CD)
    {
        cout << B - A;
        return 0;
    }
    if (!(C_in_AB) and !(D_in_AB) and !(A_in_CD) and !(B_in_CD))
    {
        cout << 0;
        return 0;
    }
    if (!(C_in_AB) and D_in_AB)
    {
        cout << D - A;
        return 0;
    }
    if (C_in_AB and !(D_in_AB))
    {
        cout << B - C;
        return 0;
    }
    return 0;
}