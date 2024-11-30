#include <bits/stdc++.h>
using namespace std;

map<int, int> ptnt(int n) {
    map<int, int> nt;
    while (n % 2 == 0) {
        nt[2]++;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            nt[i]++;
            n /= i;
        }
    }

    if (n > 2) nt[n]++;
    return nt;
}

int main() {
    int t, n;
    map<int, int> nt;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        cin >> n;
        nt = ptnt(n);
        double out = n;
        double p;

        for (auto i: nt) {
            p = i.first;
            out *= (1 - (1 / p));
        }
        cout << (int)out << "\n";
    }
    return 0;
}