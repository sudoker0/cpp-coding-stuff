#include <bits/stdc++.h>
using namespace std;

bool isSelfdiv(int n) {
    vector<int> d;
    int nn = n;
    while (nn > 0) {
        if (nn % 10 == 0) return false;
        d.push_back(nn % 10);
        nn /= 10;
    }

    for (auto i: d) {
        if (n % i != 0) return false;
    }
    return true;
}

int main() {
    int l, r;
    cin >> l >> r;
    vector<int> container;
    for (int i = l; i <= r; i++) {
        if (isSelfdiv(i)) container.push_back(i);
    }
    cout << container.size() << '\n';
    for (auto i: container) cout << i << " ";

    return 0;
}