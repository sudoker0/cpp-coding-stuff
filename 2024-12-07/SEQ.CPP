#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("SEQ.INP", "r", stdin);
    freopen("SEQ.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    ll tmp;
    cin >> n >> m;
    ll a[n + 1];
    a[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[i + 1] = a[i] + tmp;
    }

    for (int i = 0; i < m; i++) {
        cin >> tmp;
        int l = 1, r = n;
        while (l < r) {
            int mid = (l + r) / 2;
            if (a[mid] < tmp) {
                l = mid + 1;
            }
            else if (a[mid] >= tmp) {
                r = mid;
            }
        }

        if (a[l] == tmp) {
            cout << l << " ";
        } else {
            cout << -1 << " ";
        }
    }

    return 0;
}

