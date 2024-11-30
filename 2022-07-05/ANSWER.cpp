#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main()
{
    int N, buffer, smallest = INT_MAX, position = 0;

    freopen("ANSWER.INP", "r", stdin);
    freopen("ANSWER.OUT", "w", stdout);

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> buffer;
        if (buffer <= smallest)
        {
            smallest = buffer;
            position = i;
        }
    }

    cout << position;
    return 0;
}