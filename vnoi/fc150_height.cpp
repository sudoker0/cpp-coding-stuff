#include <bits/stdc++.h>
using namespace std;

struct ban {
    int idx;
    int h;
};

bool comp(ban a, ban b) {
    if (a.h == b.h) {
        return a.idx < b.idx;
    }
    return a.h > b.h;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int h1[n], h2[n];
    ban b[n];
    for (int i = 0; i < n; i++) cin >> h1[i];
    for (int i = 0; i < n; i++) cin >> h2[i];

    for (int i = 0; i < n; i++) {
        b[i].h = h2[i] - h1[i];
        b[i].idx = i + 1;
    }

    sort(b, b + n, comp);
    int highest = b[0].h;
    for (int i = 0; i < n; i++) {
        if (b[i].h == highest) cout << b[i].idx << " ";
    }

    return 0;
}