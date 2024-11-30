#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, num;
    cin >> N;
    map<int, int> solan;
    pair<int, int> nhieunhat = { 0, 0 };

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        solan[num]++;
    }

    for (map<int, int>::iterator it = solan.begin(); it != solan.end(); ++it)
    {
        int num = (*it).first, appear = (*it).second;
        if (appear > nhieunhat.second)
        {
            nhieunhat.first = num;
            nhieunhat.second = appear;
        }
    }

    cout << nhieunhat.first << ' ' << nhieunhat.second;
    return 0;
}