#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    int out = 1;
    for (int i = 0; i < b; i++) out *= a;
    return out;
}

int legendre(int a, int n) {
    int out = 0;
    int i = 1;
    while (power(a, i) <= n) {
        out += n / power(a, i);
        i++;
    }
    return out;
}

int main() {
    int n;
    cin >> n;
    cout << min(legendre(2, n), legendre(5, n));

    return 0;
}