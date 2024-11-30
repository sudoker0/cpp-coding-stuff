#include <bits/stdc++.h>
using namespace std;

int main() {
    bool prime[300001];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= 300000; i++) {
        if (!prime[i]) continue;
        for (int j = i * 2; j <= 300000; j += i) prime[j] = false;
    }

    int d[300001];
    d[0] = 0;
    for (int i = 1; i <= 300000; i++) {
        if (prime[i]) d[i] = d[i - 1] + 1;
        else d[i] = d[i - 1];
    }

    int n, cnt = 0;
    cin >> n;
    while (n > 0) {
        cout << d[2 * n] - d[n] << "\n";
        cin >> n;
    }

    return 0;
}