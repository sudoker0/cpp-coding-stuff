#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    multiset<int> b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b.insert(a[i]);
    }

    int largest = INT_MIN;

    for (int i = 0; i < n - 1; i++) {
        b.erase(a[i]);
        auto f = b.begin();
        auto l = --b.end();
        largest = max(largest, max(abs(a[i] + *f), abs(a[i] + *l)));
    }

    cout << largest;

    return 0;
}