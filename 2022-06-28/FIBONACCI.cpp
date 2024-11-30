#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, before = 0, current = 1;
    freopen("FIBONACCI.INP", "r", stdin);
    freopen("FIBONACCI.OUT", "w", stdout);
    cin >> N;
    cout << "0 1 ";
    for (int i = 0; i < N - 2; i++)
    {
        int buffer = before + current;
        before = current;
        current = buffer;
        cout << current << " ";
    }
    return 0;
}