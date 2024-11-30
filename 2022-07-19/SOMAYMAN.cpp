#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    freopen("SOMAYMAN.INP", "r", stdin);
    freopen("SOMAYMAN.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    int numlist[N], count = 1, mincount = N;

    for (int i = 0; i < N; i++)
        cin >> numlist[i];

    sort(numlist, numlist + N);

    for (int i = 0; i < N; i++)
    {
        if (numlist[i] == numlist[i + 1])
            count++;
        else
        {
            if (count <= mincount)
                mincount = count;
            count = 1;
        }
    }

    count = 1;

    for (int i = 0; i < N; i++)
    {
        if (numlist[i] == numlist[i + 1])
            count++;
        else
        {
            if (count == mincount)
                cout << numlist[i] << "\n";
            count = 1;
        }
    }

    return 0;
}