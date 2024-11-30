#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
    freopen("FIBONACCI.INP", "r", stdin);
    freopen("FIBONACCI.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    ll a = 0, b = 1, buffer = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        buffer = (a + b) % 1000000007;
        a = b;
        b = buffer;
    }

    cout << a;
    return 0;
}
