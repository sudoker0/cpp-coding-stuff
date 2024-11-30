#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll _fpos(vector<ll> v, ll x) {
    ll out = -1;
    ll l = 0, r = v.size() - 1, mid;

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

ll _lpos(vector<ll> v, ll x) {
    ll out = -1;
    ll l = 0, r = v.size() - 1, mid;

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
    // freopen("khieuvu.inp", "r", stdin);
    // freopen("khieuvu.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k, tmp;
    cin >> n >> k;
    vector<ll> a;
    for (ll i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());

    ll cnt = 0;
    for (auto i: a) {
        ll f = _fpos(a, i + k);
        if (f != -1) {
            ll l = _lpos(a, i + k);
            if (l == -1) cnt += 0;
            else cnt += (l - f) + 1;
        }
    }

    cout << cnt;
    return 0;
}