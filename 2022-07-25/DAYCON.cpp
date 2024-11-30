#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main()
{
    int N, longest = 0, current_num = INT_MIN, current_length = 0;
    bool continous = true;
    //freopen("DAYCON.INP", "r", stdin);
    //freopen("DAYCON.OUT", "W", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    int day[N];
    for (int i = 0; i < N; i++) cin >> day[i];

    for (int i = 0; i < N - longest + 1; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (day[j] >= current_num)
            {
                current_num = day[j];
                current_length++;
                continous = true;
            }
            else
            {
                if (continous)
                {
                    current_length--;
                    continous = false;
                }
                if (day[j])
            }
        }
        if (current_length >= longest) longest = current_length;
        current_num = -INT_MAX;
        current_length = 0;
    }

    cout << longest;
    return 0;
}