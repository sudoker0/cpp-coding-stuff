#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll dem_uoc(int n) {
    ll out = 0;

    ll tmp = 0;
    while (n % 2 == 0) {
        n /= 2;
        tmp++;
    }

    out = tmp + 1;

    for (int i = 3; i * i <= n; i += 2) {
        tmp = 0;
        while (n % i == 0) {
            n /= i;
            tmp++;
        }

        out *= tmp + 1;
    }

    if (n > 2) {
        out *= 2;
    }

    return out;
}

int main() {
    freopen("DAYSODEP.inp", "r", stdin);
    freopen("DAYSODEP.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp;
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[i] = dem_uoc(tmp);
    }

    vector<int> sub;
    sub.push_back(a[0]);

    for (int i = 1; i < n; i++) {
        if (a[i] > sub.back()) {
            sub.push_back(a[i]);
        } else {
            int index = -1;
            int val = a[i];
            int l = 0, r = sub.size() - 1;

            while (l <= r) {
                int mid = (l + r) / 2;
                if (sub[mid] >= val) {
                    index = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            if (index != -1) sub[index] = val;
        }
    }

    cout << sub.size();

    return 0;
}