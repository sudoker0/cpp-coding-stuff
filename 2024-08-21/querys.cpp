#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct ins {
    ll t;
    ll rc;
    ll x;
};

int main() {
    long long n, m, q, t, x1, y1, x2, y2;
    cin >> n >> m >> q;
    vector<ins> instuction;

    for (long long _ = 0; _ < q; _++) {
        cin >> t;
        switch (t) {
            case 1:
            case 2:
                cin >> x1 >> x2;
                ins d;
                d.t = t;
                d.rc = x1 - 1;
                d.x = x2;
                instuction.push_back(d);
                break;
            case 3:
                cin >> x1 >> y1 >> x2 >> y2;
                x1--; x2--; y1--; y2--;
                map<ll, ll> rows, cols;
                ll m_rows = 0, m_cols = 0;
                for (auto i: instuction) {
                    switch (i.t) {
                        case 1:
                            if (x1 <= i.rc && i.rc <= x2)
                                rows[i.rc] += i.x;
                            break;
                        case 2:
                            if (y1 <= i.rc && i.rc <= y2)
                                cols[i.rc] += i.x;
                            break;
                    }
                }
                for (auto i: rows) {
                    m_rows = max(m_rows, i.second);
                }
                for (auto i: cols) {
                    m_cols = max(m_cols, i.second);
                }
                cout << m_rows + m_cols << "\n";
                break;
        }
    }

    return 0;
}