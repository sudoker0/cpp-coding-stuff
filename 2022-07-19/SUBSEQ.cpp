#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, current_num, continous_current = 0, continous_longest = 0;

    freopen("SUBSEQ.INP", "r", stdin);
    freopen("SUBSEQ.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> current_num;
        if (current_num % K == 0)
        {
            continous_current++;
            if (continous_current >= continous_longest)
                continous_longest = continous_current;
        }
        else continous_current = 0;
    }

    cout << continous_longest;
    return 0;
}