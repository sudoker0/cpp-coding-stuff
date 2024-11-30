#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, k;
int l, r;

void sub1() {
    cin >> l >> r;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = l; i <= r; i++) dp[i] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = l; j <= r; j++) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
            }
        }
    }

    cout << dp[n];
}

int main() {
    freopen("QUASONG.inp", "r", stdin);
    freopen("QUASONG.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    n--;
    if (k == 1) {
        sub1();
    }

    return 0;
}