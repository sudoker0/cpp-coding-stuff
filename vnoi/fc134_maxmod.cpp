#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    ll n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2 == 0) n += 2;
        else n++;

        cout << n / 2 << "\n";
    }

    return 0;
}