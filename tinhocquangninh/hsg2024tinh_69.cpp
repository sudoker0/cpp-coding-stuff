#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char a[n][m];
    bool del[n][m];

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            a[i][j] = s[j];
            del[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                if (k == i) continue;
                if (a[i][j] == a[k][j]) {
                    del[i][j] = true;
                    del[k][j] = true;
                }
            }
            for (int k = 0; k < m; k++) {
                if (k == j) continue;
                if (a[i][j] == a[i][k]) {
                    del[i][j] = true;
                    del[i][k] = true;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (del[i][j]) continue;
            cout << a[i][j];
        }
    }

    return 0;
}