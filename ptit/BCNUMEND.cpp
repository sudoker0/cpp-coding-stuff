#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll power(ll a, ll b, ll mod) {
    if (b == 0) return 1;
    if (b == 1) return a % mod;
    if (b % 2 == 0) return power(((a % mod) * (a % mod)) % mod, b / 2, mod);
    return ((power(((a % mod) * (a % mod)) % mod, (b - 1) / 2, mod) % mod) * (a % mod)) % mod;
}

string num_to_str(ll num, int n) {
    string s = "";
    while (num > 0) {
        s = (char)(num % 10 + 48) + s;
        num /= 10;
    }

    int remaining = n - s.size();
    for (int i = 0; i < remaining; i++) s = "0" + s;
    return s;
}

int main() {
    int b, i, n;
    cin >> b;
    while (b != 0) {
        cin >> i >> n;
        ll f[i + 1];
        f[0] = 1;
        for (int j = 1; j <= i; j++) {
            if (f[j - 1] == 0) f[j] = 0;
            else f[j] = power(b, f[j - 1], pow(10, n));
        }
        cout << num_to_str(f[i], n) << "\n";
        cin >> b;
    }

    return 0;
}