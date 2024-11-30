#include <bits/stdc++.h>
using namespace std;

int n, k, tmp;
int chan[200001], le[200001], t_chan[200001], t_le[200001];

void sub12() {
    int cnt = 0;
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
            int x = t_chan[r] - t_chan[l - 1];
            int y = t_le[r] - t_le[l - 1];
            if (
                chan[r] - chan[l - 1] >= 1 &&
                le[r] - le[l - 1] >= 1 &&
                x - y <= k && x - y >= 0
            ) {
                cnt++;
            }
        }
    }

    cout << cnt;
}

int main() {
    freopen("Daysodep.inp", "r", stdin);
    freopen("Daysodep.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    chan[0] = 0;
    le[0] = 0;
    t_chan[0] = 0;
    t_le[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        if (tmp % 2 == 0) {
            chan[i] = chan[i - 1] + 1;
            le[i] = le[i - 1];

            t_chan[i] = t_chan[i - 1] + tmp;
            t_le[i] = t_le[i - 1];
        } else {
            chan[i] = chan[i - 1];
            le[i] = le[i - 1] + 1;

            t_chan[i] = t_chan[i - 1];
            t_le[i] = t_le[i - 1] + tmp;
        }
    }

    //if (k == 0) sub3();
    sub12();
    return 0;
}