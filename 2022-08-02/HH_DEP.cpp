#include <bits/stdc++.h>
using namespace std;

int tong_uoc(int num)
{
    int sum = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i * i != num)
                sum += num / i;
        }
    }
    return sum - num;
}

int main()
{
    freopen("HH_DEP.INP", "r", stdin);
    freopen("HH_DEP.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int M, N, K, total = 0;
    cin >> M >> N >> K;

    for (int i = M; i <= N; i++)
    {
        int uoc = tong_uoc(i);
        if (uoc == i and i % K == 0) total += i;
    }

    cout << total;
    return 0;
}