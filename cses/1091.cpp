#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int h, t;
    vector<int> h_ticket;
    for (int i = 0; i < n; i++) {
        cin >> h;
        h_ticket.push_back(h);
    }
    sort(h_ticket.begin(), h_ticket.end());

    for (int i = 0; i < m; i++) {
        cin >> t;
        vector<int>::iterator pos = lower_bound(h_ticket.begin(), h_ticket.end(), t);

        if (t != *pos) {
            pos--;
        }

        if (pos < h_ticket.begin() || pos >= h_ticket.end()) {
            cout << -1 << "\n";
        } else {
            cout << *pos << "\n";
            h_ticket.erase(pos);
        }
    }

    return 0;
}