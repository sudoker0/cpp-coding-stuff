#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int r = n / 9;
    if (n % 9 != 0) r++;

    cout << r;

    return 0;
}