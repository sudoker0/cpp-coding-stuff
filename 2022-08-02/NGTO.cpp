#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("NGTO.INP", "r", stdin);
    freopen("NGTO.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, current = 0, longest = 0;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<bool> prime(100000, true);

    prime[1] = false;
    for (int p = 2; p * p <= N; p++)
    {
        if (!prime[p]) continue;
        for (int i = p * 2; i <= N; i += p)
            prime[i] = false;
    }

    for (int i = 0; i < N; i++)
    {
        if (prime[A[i]])
        {
            current++;
            if (current >= longest) longest = current;
        }
        else current = 0;
    }

    cout << longest;
    return 0;
}