#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int smallest_pos[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    smallest_pos[0] = -1;
    int cur_pos = 0;
    for (int i = 1; i < n; i++) {
        cur_pos = i - 1;
        while (a[cur_pos] >= a[i] && cur_pos >= 0) {
            cur_pos = smallest_pos[cur_pos];
        }

        if (cur_pos < 0) smallest_pos[i] = -1;
        else {
            smallest_pos[i] = cur_pos;
        }
    }

    for (int i = 0; i < n; i++) cout << smallest_pos[i] + 1 << " ";

    return 0;
}