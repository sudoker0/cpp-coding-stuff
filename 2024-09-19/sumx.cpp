#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll _fpos(vector<int> v, int x) {
    int out = -1;
    int l = 0, r = v.size() - 1, mid;

    while (l <= r) {
        mid = (l + r) / 2;
        if (v[mid] > x) {
            r = mid - 1;
        } else if (v[mid] < x) {
            l = mid + 1;
        } else {
            out = mid;
            r = mid - 1;
        }
    }

    return out;
}

ll _lpos(vector<int> v, int x) {
    int out = -1;
    int l = 0, r = v.size() - 1, mid;

    while (l <= r) {
        mid = (l + r) / 2;
        if (v[mid] > x) {
            r = mid - 1;
        } else if (v[mid] < x) {
            l = mid + 1;
        } else {
            out = mid;
            l = mid + 1;
        }
    }

    return out;
}

int main() {
    int n, x, tmp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> x;
    sort(v.begin(), v.end());

    ll cnt = 0;
    for (auto i: v) {
        if (i >= x - i) break;

        int f = _fpos(v, x - i), l = _lpos(v, x - i);
        if (f == -1 || l == -1) continue;
        cnt += l - f + 1;
    }

    if (x % 2 == 0) {
        int f = _fpos(v, x / 2), l = _lpos(v, x / 2);
        if (f != -1 && l != -1) {
            cnt += (l - f + 1) * (l - f) / 2;
        }
    }

    cout << cnt;

    return 0;
}