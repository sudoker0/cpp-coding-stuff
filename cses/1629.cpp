#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(a, a + n, comp);

    int cnt = 0, end = a[0].first;
    for (int i = 0; i < n; i++) {
        if (a[i].first >= end) {
            cnt++;
            end = a[i].second;
        }
    }

    cout << cnt;

    return 0;
}