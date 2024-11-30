#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0, i = 1, cnt = 0;
    while (sum <= n) {
        sum += i * (i + 1) / 2;
        i++;
    }

    cout << i - 2;

    return 0;
}