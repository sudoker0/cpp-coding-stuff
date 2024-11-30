#include <bits/stdc++.h>
using namespace std;

int main()
{
    int P, N, pipe_height, prev_height = 0;
    bool lose = false;
    freopen("JUMPING.INP", "r", stdin);
    freopen("JUMPING.OUT", "w", stdout);
    cin >> P >> N;
    for (int i = 0; i < N; i++)
    {
        pipe_height = 0;
        cin >> pipe_height;
        if (P >= abs(pipe_height - prev_height)) prev_height = pipe_height;
        else
        {
            lose = true;
            break;
        }
    }
    if (lose)
        cout << "GAME OVER";
    else
        cout << "YOU WIN";
    return 0;
}