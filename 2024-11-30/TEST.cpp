#include <bits/stdc++.h>
using namespace std;

long long a[1501][1501];
int n, m;

long long calculate() {
    long long dp[n][m];
    dp[0][0] = a[0][0];
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + a[i][0];
    }

    for (int i = 1; i < m; i++) {
        dp[0][i] = dp[0][i - 1] + a[0][i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            dp[i][j] = a[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[n - 1][m - 1];
}

int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> a[i][j];

    long long smallest = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) continue;
            if (i == n - 1 && j == m - 1) continue;

            long long tmp = a[i][j];
            a[i][j] = LLONG_MIN;
            smallest = min(smallest, calculate());
            a[i][j] = tmp;
        }
    }

    cout << smallest;
    return 0;
}