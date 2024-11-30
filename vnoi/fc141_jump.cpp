#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << n - (i / 2 - 1) << " ";
        } else {
            cout << (i + 1) / 2 << " ";
        }
    }

    return 0;
}