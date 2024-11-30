#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, q;
    cin >> m >> n >> q;
    int a[m][n];
    int phu_hop_tai_rows[m], phu_hop_tai_cols[n];
    int largest_rows[m], largest_cols[n];

    for (int i = 0; i < m; i++) {
        largest_rows[i] = 0;
        phu_hop_tai_rows[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        largest_cols[i] = 0;
        phu_hop_tai_cols[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (largest_rows[i] < a[i][j]) {
                largest_rows[i] = a[i][j];
                phu_hop_tai_rows[i] = j;
            }
            if (largest_cols[j] < a[i][j]) {
                largest_cols[j] = a[i][j];
                phu_hop_tai_cols[j] = i;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < m; i++) {
        if (largest_rows[i] == largest_cols[phu_hop_tai_rows[i]]) {
            cnt++;
        }
    }

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int r, c, x;
    while (q--) {
        cin >> r >> c >> x;
        r--;
        c--;
        a[r][c] = x;
        if (x > largest_rows[r]) {
            if (largest_rows[r] == largest_cols[phu_hop_tai_rows[r]]) {
                cnt--;
            }
            largest_rows[r] = x;
            phu_hop_tai_rows[r] = c;
        }

        if (x > largest_cols[c]) {
            if (largest_cols[c] == largest_rows[phu_hop_tai_cols[c]]) {
                cnt--;
            }
            largest_cols[c] = x;
            phu_hop_tai_cols[c] = r;
        }

        if (largest_rows[r] == x && largest_cols[c] == x) cnt++;
        cout << cnt << "\n";
    }

    return 0;
}