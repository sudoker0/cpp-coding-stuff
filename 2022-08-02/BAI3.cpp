#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, K, count = 0;
    cin >> N >> K;

    int price[N];
    for (int i = 0; i < N; i++) cin >> price[i];
    sort(price, price + N);

    for (int i = 0; i < N; i++)
    {
        K -= price[i];
        count++;
        if (K < 0 or K - price[i + 1] < 0) break;
    }

    cout << count;
    return 0;
}