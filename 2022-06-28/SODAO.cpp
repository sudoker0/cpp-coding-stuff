#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N, reversed_N;
    freopen("SODAO.INP", "r", stdin);
    freopen("SODAO.OUT", "w", stdout);
    cin >> N;
    for (int i = N.length() - 1; i >= 0; i--) reversed_N += N[i];
    cout << reversed_N;
    return 0;
}