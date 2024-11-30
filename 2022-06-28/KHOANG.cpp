#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, in_num = 0, out_num = 0;
    freopen("KHOANG.INP", "r", stdin);
    freopen("KHOANG.OUT", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        X = 0;
        cin >> X;
        if (X >= 10 and X <= 20)
        {
            in_num++;
        }
        else
        {
            out_num++;
        }
    }
    cout << in_num << " trong\n" << out_num << " ngoai";
    return 0;
}