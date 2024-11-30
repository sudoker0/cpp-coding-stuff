#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (1 <= n and n <= 10) {
        cout << 5000 * n;
    } else if (11 <= n and n <= 20) {
        cout << 4800 * n;
    } else {
        cout << 4500 * n;
    }
    return 0;
}