#include <bits/stdc++.h>
using namespace std;

vector<int> primefactor(int N)
{
    vector<int> a;
    while (N % 2 == 0)
    {
        a.push_back(2);
        N /= 2;
    }

    for (int i = 3; i * i <= N; i += 2)
    {
        while (N % i == 0)
        {
            a.push_back(i);
            N /= i;
        }
    }

    if (N > 2) a.push_back(N);
    sort(a.begin(), a.end());
    return a;
}

int main()
{
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N;
    cin >> T;
    for (int _ = 0; _ < T; _++)
    {
        cin >> N;
        vector<int> pf = primefactor(N);
        cout << pf[pf.size() - 1] << '\n';
    }
    return 0;
}